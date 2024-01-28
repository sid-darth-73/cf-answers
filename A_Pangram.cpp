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


int solver()
{
    ll n,f,a,b;
    int flag=0;
 
    cin >> n >> f >> a >> b;
    vector<ll> m(n+1);
    m[0]=0;
    for(ll i=1;i<=n;i++)
    {
        cin >> m[i];
    }
    for(ll i=1;i<=n;i++)
    {
        ll diff = m[i] - m[i-1];
        ll co = min(diff*a , b);
        f = f - co;
        if(f<=0)
        {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
 
}
 
int main()
{
	fastio();
    int t;
    cin >> t;
    while(t--)
    {
       solver(); 
    }
    return 0;
}