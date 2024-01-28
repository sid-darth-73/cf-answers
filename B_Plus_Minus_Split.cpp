#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        if(s[i]=='+') ans++;
        else ans--;
    }
    if(ans >=0) cout << ans << '\n';
    else cout << -1*ans << '\n';

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