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
    int n;
    cin >> n;
    if(n==1) cout << -1 << "\n";
    else
    {
        cout << 5;
        for(int i=1;i<n;i++)
        {
            cout << 3;
        }
        cout <<'\n';
    }
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