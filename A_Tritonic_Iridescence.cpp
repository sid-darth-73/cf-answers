//Siddharth Raj
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using uint = unsigned int;
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
	for(int i = 0; i < n - 1; ++i)
    {
		if(s[i] != '?' && s[i] == s[i+1])
		{
            cout << "NO";
            return;
        }
    }
	for(int i = 0; i < n; ++i) 
    {
        if(s[i] == '?') 
        {
            if(i == 0 || i == (n - 1)) 
            {
                cout << "YES";
                return;
            }
            if(s[i+1] == '?') 
            {
                cout << "YES";
                return;
            }
            if(s[i-1] == s[i+1])
            {
                cout << "YES";
                return;
            }
	    }
    }
	cout << "NO";
    return;

}
int main()
{
	fastio();
    uint t=1;
    //cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}