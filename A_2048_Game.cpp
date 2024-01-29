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
    for(ll i=0; i<n; i++)
    {
        if(a[i]==2048)
        {
            cout << "YES\n";
            return;
        }
    }
    sort(a.begin(),a.end());
    auto m = lower_bound(a.begin(),a.end(),2048);
    ll ub;
    if(m !=  a.end())
    {
        ub = (m - a.begin()) - 1;
    }
    else ub = n-1;
    ll g=0;
    vector<int> v(15);
    for(int i=0;i<=ub;i++)
    {
        g+=a[i];
        if(g >= 2048)
        {
            cout << "YES\n";
            return;
        }

    }
    //cout << ub << " -- " << g << endl;
    cout << "NO\n";
    return;



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