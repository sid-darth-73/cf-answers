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
    int n;
    cin >> n;
    pii arr[n + 1];
    for(int i = 1; i <= n; i++) cin >> arr[i].ff, arr[i].ss = i;
    sort(arr + 1, arr + n + 1);
    int nxt[n + 1];
    ll sum[n + 1];
    int ans[n + 1];
    nxt[0] = sum[0] = 0;
    for(int i = 1; i <= n; i++){
        if(nxt[i - 1] >= i){
            nxt[i] = nxt[i - 1];
            sum[i] = sum[i - 1];
        } else {
            sum[i] = sum[i - 1] + arr[i].ff;
            nxt[i] = i;
            while(nxt[i] + 1 <= n && sum[i] >= arr[nxt[i] + 1].ff){
                nxt[i]++;
                sum[i] += arr[nxt[i]].ff;
            }
        }
        ans[arr[i].ss] = nxt[i];
    }
    for(int i = 1; i <= n; i++) cout << ans[i] - 1 << " ";
    cout << endl;
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