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
    ll n;
    cin >> n;
    if(n<=6 || n==9) cout << "NO\n";
    else if(n % 3 == 2 && n > 5) cout << "YES\n1 2 " << n-3 << "\n";

    else if(n%3 == 1 && n>4) cout << "YES\n1 4 " << n-5 << "\n";
    else if(n%3 == 0 && n>12) cout << "YES\n2 5 " << n-7 << "\n";
    else if(n==12) cout << "YES\n1 4 7\n";

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