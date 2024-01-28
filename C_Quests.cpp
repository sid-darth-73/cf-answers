#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void solve()
{
    ll n,k;
    ll ans=0;
    cin>>n>>k;
    vector <ll> a(n),b(n),suma(n),maxb(n);
    cin>>a[0];
    suma[0] = a[0];
    for(ll i = 1 ; i < n ; i++) {
        cin>>a[i];
        suma[i] = a[i]+suma[i-1];
    }
    cin>>b[0];
    maxb[0] = b[0];
    for(ll i = 1 ; i < n ; i++) {
        cin>>b[i];
        maxb[i] = max(maxb[i-1],b[i]);
    }       
    ans = INT_MIN;
    k--;
    for(ll i = 0 ; i < n ; i++) {
        ans = max(ans,suma[i]+(k-i)*maxb[i]);
        if(i == k)
            break;
    }
    cout<<ans<<endl;
}

int main()
{
	fastio();
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
	return 0;
}