//Siddharth Raj
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned int;
#define all(x) (x).begin(), (x).end();
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
int gcd(ll a,ll b)
{
    while(b)
    {
        a = a % b;
        swap(a,b);
    }
    return a;
}

void solve()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll> > a(n);
    ll s = 1;
    for(auto &i : a)
    {
        cin >> i.first;
        i.second = s;
        s += 1;
    }
    sort(a.begin(), a.end());
    vector<pair<ll, ll> > v;
    for(int i=0; i< n-1; i++)
    {
        if(a[i].first != a[i+1].first) v.push_back({a[i].first, a[i].second});
    }
    v.push_back(a[a.size()-1]);
    ll oc=0;
    if(v.size() == 1 && v[0].first == 1)
    {
        cout << v[0].second * 2 << "\n";
        return;
    }
    ll ans = -1;
    for(ll i=0; i<v.size()-1; i++)
    {
        for(int j=i; j<v.size(); j++)
        {
           if(gcd(v[i].first, v[j].first) == 1)
           {
               ans = max(ans, v[i].second+v[j].second);
           }
        }
    }
    cout << ans << "\n";
    // for(auto e : v)
    // {
    //     cout << e.first << "-->" << e.second << " ";
    // }
    return;



}
int main()
{
	fastio();
    ull t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}