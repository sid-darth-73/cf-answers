//Siddharth Raj
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using uint = unsigned int;
#define all(x) as (x).begin(), (x).end();
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
bool cmp(pair<int,int> a, pair<int,int> b)
{
    return a.second < b.second;
}
void solve()
{
    ll n,p; 
    cin>>n>>p;
    vector<int> a(n);
    for(auto &i: a) cin >>i;
    vector<int> b(n);
    for(auto &i : b) cin >> i;
    vector<pair<ll,ll> > arr(n);
    for(int i=0;i<n;i++)
    {
        arr[i].first = b[i];
        arr[i].second = a[i];
    }
    sort(arr.begin(),arr.end());
    ll i = 0;
    ll j = 0;
    ll ans = 0;
    ans += p;
    while(j < n-1 && i < n-1)
    {
        if(arr[i].second == 0) i++;
        ans += min(p , arr[i].first);
        arr[i].second--;
        j++;
    }
    cout << ans << "\n";
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