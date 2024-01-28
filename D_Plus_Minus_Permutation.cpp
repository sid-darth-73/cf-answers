#include <bits/stdc++.h>
using namespace std;
using ll = long long;
// typedef long double ld;
// typedef pair<ll, ll> pii;
// typedef pair<ll, ll> pll;
// typedef pair<ld, ld> pld;
// #define ff first
// #define ss second
// #define pb push_back;
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
namespace math {
    ll gcd(ll a, ll b) 
    {
        if (b == 0) 
        {
            return a;
        }
        return gcd(b, a % b);
    }
    ll lcm(ll a, ll b) 
    {
        return (a * b) / gcd(a, b);
    }
}
void solve()
{
    ll n,x,y;
    cin >> n >> x >> y;
    ll a = n/x;
    ll b = n/y;
    ll c = n/math::lcm(x,y);
    ll x_only = a - c;
    ll y_only = b - c;
    ll ans = (2*n - x_only + 1)*(x_only)/2 - y_only*(y_only+1)/2;
    cout << ans << "\n";
}
signed main()
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