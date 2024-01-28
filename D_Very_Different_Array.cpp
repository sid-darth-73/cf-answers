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
    ll n, m;
    cin >> n >> m;
    vector<ll>a(n),b(m);

    for(auto &i : a)cin >> i;   
    for(auto &i : b)cin >> i;   
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    ll ans = 0;
    ll al = 0, bl = 0, ar = n - 1, br = m - 1;
    while(al <= ar && bl <= br){
        ll x = abs(b[br] - a[al]);
        ll y = abs(b[bl] - a[ar]);
        if(x > y)
        {
            ans += x;
            al++;
            br--;
        }
        else
        {
            ans += y;
            ar--;
            bl++;
        }
    }
    cout << ans << "\n";
}
 
signed main()
{
	fastio();
    ll t;
    cin >> t;
    while(t--)
    {
      solver();  
    }
    return 0;
}