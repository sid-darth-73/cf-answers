#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define ff first
#define ss second
#define pb push_back;
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void solver()
{
    string s;
    set <char> a;
    getline(cin,s);
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]>='a' && s[i]<='z') a.insert(s[i]);
    }
    cout<<a.size();
    return;
}
int main()
{
	fastio();
    int t=1;
    //cin >> t;
    while(t--)
    {
        solver();
    }
    return 0;
}