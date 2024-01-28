#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<ld, ld> pld;
#define ff first
#define ss second
#define pb push_back;
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
void solver()
{
    int n, k, x;
    cin >> n >> k >> x;
    vector<int> a(n + 1), b(n + 1);
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    sort(a.begin(),a.end());
    b[0] = 0;
    for (int i = 1; i <= n; ++i)
        b[i] = a[i] + b[i - 1];
    int ans = INT_MIN;
    int f = x;
 
    for(int i = n - k; i <= n; ++i){
        f = x;
        if(i-x < 0)f = i;
        ans = max(ans,b[i-f] - b[i] + b[i-f]);
 
    }
    cout << ans << "\n";
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