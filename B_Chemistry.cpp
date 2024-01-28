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

void solver()
{
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> a(26,0);
    for(int i=0;i<n;i++)
    {
        a[int(s[i]) - 97]++;
    }
    if(n-k==1) cout << "YES\n";
    else if((n-k)%2==0)
    {
        int odd_cnt = 0;
        int even_cnt = 0;
        for(int i=0;i<26;i++)
        {
            if(a[i] % 2 == 0 && a[i] != 0) even_cnt++;
            else if(a[i]%2==1) odd_cnt++;
        }
        //cout << "((((()))))" << "\n" << k << " " << odd_cnt << "\n";
        if(odd_cnt > k) cout << "NO\n";
        else cout << "YES\n";
    }
    else if((n-k) % 2 == 1)
    {
        int odd_cnt = 0;
        int even_cnt = 0;
        for(int i=0;i<26;i++)
        {
            if(a[i] % 2 == 0 && a[i] != 0) even_cnt++;
            else if(a[i]%2==1) odd_cnt++;
        }
        if(odd_cnt > k+1) cout << "NO\n";
        else cout << "YES\n";
    }

}
int main()
{
	fastio();
    int t;
    cin >> t;
    while(t--)
    {
        solver();
    }
    
    return 0;
}