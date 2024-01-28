#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define ff first
#define ss second
#define pb push_back;
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
void solve()
{
    unsigned int n;
    cin >> n;
    string a,b,c;
    cin >> a >> b >> c;
    int f=0;
    if(a==c || c==b)
    {
        cout << "NO\n";
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(a[i] != c[i] && c[i]!=b[i])
        {
            //f=1;
            cout << "YES\n";
            return;
        }
        

    }
    cout << "NO\n";
    return;

}

int main()
{
	fastio();
    int t;
    cin >> t;
    while(t--)
    {
        solve();  
    }
    return 0;
}