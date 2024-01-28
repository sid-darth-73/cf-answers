#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int k;
    for(int i=s.size()-1;i>=0;i--)
    {
        if(int(s[i]) != 48)
        {
            k=i;
            break;
        }
    }
    string ans="";
    for(int i=0;i<k;i++)
    {
        ans+=s[i];
    }
    cout << ans << "\n";
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();  
    }
    return 0;
}