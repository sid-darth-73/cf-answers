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
   string s;
   cin >> s;
   cout << int(s[0])-48+ int(s[2])-48 << "\n";
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