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
    int a,b,c,d;
    cin >> a >> b;
    cin >> c >> d;
    if((a < b && c < d && a < c && b < d) || (c < a && d < b && c < d && a < b) || (d < c && b < a && d < b && c < a) || (b < d && a < c && b < a && d < c))
    {
        cout << "YES\n";
    }
    else cout << "NO\n";
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