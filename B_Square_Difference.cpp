//Siddharth Raj
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using uint = unsigned int;
#define all(x) (x).begin(), (x).end();
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void solve()
{
    ll a, b;
    cin >> a >> b;
    if((a-b) != 1)
    {
        cout << "NO\n";
        return;
    }
    ll m = (2*b + 1);
    for(int i=2; i <= sqrt(m); i++)
    {
        if(m % i == 0)
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
    return;
}
int main()
{
	fastio();
    uint t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}