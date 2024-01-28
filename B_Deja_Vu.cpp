#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
 
bool cmp(pair<ll,ll> a, pair<ll,ll> b)
{
    return a.second < b.second;
}
void solver()
{
	ll n,q;
	cin >> n >> q;
	vector<pair<ll,ll> > a(n);
    vector<ll> x(q);
    vector<ll> ans(n);
    ll tr=1;
	for(int i=0;i<n;i++) 
    {
        ll elem;
        cin >> elem;
        a[i].first = elem;

        a[i].second = tr;
        tr++;
    }
	for(auto &i : x) cin >> i;
    //sort(x.begin(),x.end());
    sort(a.begin(),a.end());
	for(ll i=0;i<q;i++)
	{
		//elem = 1<<x[i];
        for(int j=0;j<n;j++)
        {
            if(a[j].first < (1<<x[i])) break;
            if(a[j].first % (1<<x[i])==0) a[j].first += (1<<(x[i]-1));
        }
	}
    sort(a.begin(),a.end(),cmp);
	for(ll k=0;k<n;k++) cout << a[k].first << " ";
    cout << "\n";
} 
void solve()
{
    ll n, q;
    cin >> n >> q;
    vector<pair<ll, ll>> a(n);
    for (ll i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        a[i] = {x, i};
    }
    vector<ll> qu(q);
    for (auto &i : qu) cin >> i;
    sort(a.rbegin(), a.rend());
 
    ll mini = INT_MAX;
    for (auto &i : qu)
    {
        if(mini <= i) continue;
        for (auto &j : a)
        {
            if (j.first < (1 << i)) break;
            if ((j.first % (1 << i)) == 0)
            {
                j.first += (1 << (i - 1));
               
            }
        }
        mini = min(mini, i);
       
    }
    sort(a.begin(), a.end(), cmp);
    for (auto &i : a)
        cout << i.first << " ";
    cout << "\n";
}
 
signed main()
{
    fastio();
 
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
 
    return 0;
}