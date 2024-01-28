//Siddharth Raj
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
    ll x,n;
    cin >> x >> n;

    set<ll> greg;
    // if(x%n==0)
    // {
    //     cout << 
    // }
    for(ll i = 1; i * i <=x; i++)
    {
        if(x % i == 0)
        {
            greg.insert(i);
            ll m = x/i; // divisible rhega

            greg.insert(m);
        }
    }
    ll rat = (x/n);
    auto smol_les = greg.lower_bound(rat); // just kam wla dhundna hai
    if( rat < *smol_les) smol_les--;

    cout << *smol_les << "\n";
    return;

}
 
int main()
{
	fastio();
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}