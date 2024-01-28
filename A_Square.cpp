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
    int x1,y1,x2,y2,x3,y3,x4,y4;
    cin >> x1 >> y1  >> x2 >> y2  >> x3 >> y3  >> x4 >> y4; 
    if(x1==x2) cout << abs(x4-x1)*abs(x3-x2) << "\n";
    else cout << abs(x2-x1)*abs(x3-x4) << "\n";
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