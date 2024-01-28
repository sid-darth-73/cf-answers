#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<ld, ld> pld;
#define ff first
#define ss second
#define pb push_back;
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
void solver()
{
    int n;
    cin >> n;
    string s1,s2;
    cin >> s1 >> s2;
    int d=0;
    int a1=0,b1=0,a2=0,b2=0;
    for(int i=0;i<n;i++)
    {
        if(s1[i] != s2[i]) d++;
        if(s1[i] == '1') a1++;
        else a2++;
        if(s2[i]=='1') b1++;
        else b2++;
    }
    cout << abs(a1-b1) + (d-abs(a1-b1))/2 << "\n";
}

int main()
{
	fastio();
    int t;
    cin >> t;
    while(t--)
    {
        solver();
    }
    return 0;
}