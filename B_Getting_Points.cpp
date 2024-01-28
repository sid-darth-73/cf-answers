#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

bool possible(ll task,ll p,ll l,ll t, ll mid)
{
    ll ans = min(task,2*mid)*t;
    ans += mid*l;
    return ans >= p;
}
void solver()
{
    ll n,p,l,t;
    cin >> n >> p >> l >> t;
    ll task = (n+6)/7;
    ll low = 1, high = n;
    ll mid;
    while(low < high)
    {
        mid = (low+high)/2;
        if(possible(task,p,l,t,mid)) high = mid;
        else low = mid+1;
    }
    cout  << n - high << "\n";
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