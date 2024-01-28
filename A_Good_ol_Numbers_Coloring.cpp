//Siddharth Raj
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
using ll = long long;
using uint = unsigned int;
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
int gcd(int a, int b)
{
    while(b>0)
    {
        a = a % b;
        swap(a,b);
    }
    return a;
}
// euclid's algo for gcd finding

void solve()
{
    int a,b;
    cin >> a >> b;
    int m = gcd(a,b);
    if(m > 1) cout << "Infinite\n";
    else cout << "Finite\n";
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