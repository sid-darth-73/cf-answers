//Siddharth Raj
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using uint = unsigned int;
#define all(x) (x).begin(), (x).end();
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(auto &i : a) cin >> i;
    ll m = 1;
    for(int i=1;i<n;i++)
    {
        if(a[i] < a[i-1]) m++;
    }
    if(m ==  n) cout << "NO\n";
    else cout << "YES\n";

}
int main()
{
	fastio();
    uint t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}