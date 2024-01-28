#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<ld, ld> pld;
#define ff first
#define ss second
#define pub push_back;
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
double dist(int a,int b, int c, int d)
{
    return sqrt( pow((a - c),2) + pow((b-d),2));
}
void solver()
{
    double px,py,ax,ay,bx,by,oa,ob,pa,pb,ab,ans,temp;
    ans=INT_MAX;
    cin >> px >> py;
    cin >> ax >> ay;
    cin >> bx >> by;
    oa=dist(0,0,ax,ay);
    ob=dist(0,0,bx,by);
    pa=dist(px,py,ax,ay);
    pb = dist(px,py,bx,by);
    ab = dist(ax,ay,bx,by);
    ans = min(ans, max(pa, oa));
    ans = min(ans, max(pb, ob));
    ans = min(ans, max({ab / 2, pa, ob}));
    ans = min(ans, max({ab / 2, pb, oa}));
    cout << setprecision(10) << ans << "\n";
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