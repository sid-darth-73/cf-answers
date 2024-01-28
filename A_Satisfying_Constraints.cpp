#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
// typedef pair<int, int> pii;
// typedef pair<ll, ll> pll;
// typedef pair<ld, ld> pld;
// #define ff first
// #define ss second
// #define pb push_back;
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void solver()
{
    int n;
    cin >> n;
    int l = 1;
    int r = 1e9;
    int s = 0;
    
    vector<int> neq;

    for (int i = 0; i < n; i++){
        int a, x;
        cin >> a >> x;

        if (a == 1)
            l = max(l, x);
        if (a == 2)
            r = min(r, x);
        if (a == 3)
            neq.push_back(x);
    }
    for (int x : neq)
        if (x >= l and x <= r)
            s++;
    
    cout<<max(r - l + 1 - s, 0)<<"\n";
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