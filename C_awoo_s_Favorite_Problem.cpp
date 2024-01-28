#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using uint = unsigned int;
#define ff first
#define ss second
#define pb push_back;
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void solve()
{
    uint n;
    cin >> n;

    string s, t;
    cin >> s >> t;

    if (count(s.begin(), s.end(), 'b') != count(t.begin(), t.end(), 'b') || count(s.begin(), s.end(), 'a') != count(t.begin(), t.end(), 'a') || count(s.begin(), s.end(), 'c') != count(t.begin(), t.end(), 'c')) 
    {
        cout << "NO\n";
        return;
    }

    uint j = 0;
    for (int i = 0; i < n; ++i) 
    {
        if (s[i] == 'b') continue;

        while (t[j] == 'b') j++;

        if (s[i] != t[j] || (s[i] == 'a' && i > j) || (s[i] == 'c' && i < j)) 
        {
            cout << "NO\n";
            return;
        }
        j++;
    }
    cout << "YES\n";

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