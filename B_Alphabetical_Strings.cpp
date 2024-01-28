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
    string s;
    cin >> s;
    int n = s.size();
    int r = n-1;
    int l = 0;
    int n1=n;
    for(int i=0;i<n;i++)
    {
        if(int(s[i]) > 96 + n)
        {
            cout << "NO\n";
            return;
        }
        if(int(s[l]) == 97 + n1 - 1)
        {
            n1--;
            l++;
        }
        else if(int(s[r]) == 97 + n1 - 1)
        {
            n1--;
            r--;
        }
        else
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
    return;
}
void solver()
{
    string s;
    cin >> s;
    int n = s.size();
    int r = n-1;
    int l = 65;
    int n1 = -1;
    for(int i=0;i<n;i++)
    {
        if(s[i] == 'a') n1=i;
    }
    if(n1 == -1)
    {
        cout << "NO\n";
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(int(s[n1]) == 97)
        {

        }
    }
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