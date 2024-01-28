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
    int a,b,c;
    cin >> a >> b >> c;
    double mid = (a+b)/2;
    cout << max(ceil(abs(mid-b)/c),ceil(abs(mid-a)/c));
    cout << "\n";

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