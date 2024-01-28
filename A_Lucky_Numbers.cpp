#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
ll number_diff(ll n){
    string b=to_string(n);
    int a=b.size();
    int mex=INT_MIN;
    int mi = INT_MAX;
    for(int i=0; i<a; i++)
    {
        if(int(b[i])-48 >= mex) mex = int(b[i])-48;
        if(int(b[i])-48 <= mi) mi = int(b[i])-48;
    }
    return mex - mi;
    return 0;
 
}
void solver()
{
    int n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (auto& x : a) cin >> x;
    for (auto& x : b) cin >> x;
    ll mnA = *min_element(a.begin(), a.end());
    ll sA = accumulate(a.begin(), a.end(), 0LL);
    ll mnB = *min_element(b.begin(), b.end());
    ll sB = accumulate(b.begin(), b.end(), 0LL);
    ll ans = min(mnA * n + sB, mnB * n + sA);
    cout << ans << '\n';
} 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solver();
    }
    
    return 0;
}