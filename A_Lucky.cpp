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
    string s;
    cin >> s;
    if(int(s[0])+int(s[1])+int(s[2]) == int(s[3])+int(s[4])+int(s[5])) cout << "YES\n";
    else cout << "NO\n";
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