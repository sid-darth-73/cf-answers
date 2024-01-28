#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using uint = unsigned int;
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
void solve()
{
    ll n,m;
    cin >> n;
    ll odd_n=0;
    ll even_n=0;
    for(ll i=0;i<n; i++)
    {
        ll e;
        cin >> e;
        if(e%2==0) even_n++;
        else odd_n++;
    }
    cin >> m;
    ll odd_m=0;
    ll even_m=0;
    for(ll i=0;i<m; i++)
    {
        ll e;
        cin >> e;
        if(e%2==0) even_m++;
        else odd_m++;
    }
    cout  << (even_n*even_m) + (odd_n*odd_m) << "\n";
    // cout << "this is even one : " << even_n << " " << even_m << endl;
    // cout << "this is odd one : " << odd_n << ' ' << odd_m << endl;
}

int main()
{
	fastio();
    ll t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}