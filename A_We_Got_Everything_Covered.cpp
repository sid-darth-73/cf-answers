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
    ll n, k;
    cin >> n >> k;

    string fin_op = "";

    for (int i = 0; i < n; i++)
    {
        for (int i = 97; i <= 122; i++)
        {
            int temp = i - 97;
            if (temp >= k) break;// ab change nhi hoga

            fin_op.push_back(i);
        }
    }

    cout << fin_op << "\n";
}

int main()
{
	fastio();
    uint t;
    cin >> t;
    while(t--) solve();
    return 0;
}