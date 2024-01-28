#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
 
void solve()
{
    ll a,b;
    cin >> a >> b;
    // for(ll i=1; i<=a+b; i++)
    // {
    //     if(b > a && i%2 == 1)
    //     {
    //         swap(a,b);
    //         a--;
    //         continue;
    //     }
    //     if(a == b && i%2 == 0)
    //     {
    //         cout << "Alice\n";
    //         break;
    //     }
    //     if(a == b && i%2 == 1)
    //     {
    //         cout << "Bob\n";
    //         break;
    //     }
    //     if(a > b && i%2 == 0)
    //     {
    //         swap(b,a);
    //         b--;
    //         continue;
    //     }

    // }
    if( (a+b)%2 == 0) cout << "Bob\n";
    else cout << "Alice\n";
}
int main()
{
	fastio();
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}