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
    cin >> s;
    int f=0;
    string s1="";
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
        {
            if(i>f) s1+= " ";
            i+=2;
        }
        else if(s[i]!='W' || s[i+1]!='U' || s[i+2]!='B')
        {
            s1+=s[i];
            f=i;      
        }
    }
    cout << s1;
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