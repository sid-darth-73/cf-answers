//Siddharth Raj
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using uint = unsigned int;
#define all(x) (x).begin(), (x).end();
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

vector<bool> a(1e6, true);
void sieve()
{
 
    a[0] = a[1] = 0;
    for (int i = 2; i * i <= 1e6; i++)
    {
 
        if (a[i] == true)
        {
 
            for (int j = i * i; j < 1e6; j += i)
            {
                a[j] = false;
            }
        }
    }
}
void solve()
{
       int n;
       cin >> n;
       int ans = 0;
       for(int i = 1; i <= n; ++i)
       {
            int cnt = 0;
            int k = i;
            for(int j = 2; j <= sqrt(i); ++j)
            {
                if(k%j == 0)cnt++;
                while(k%j == 0)
                {
                    k/=j;
                }
            }
            if(a[k]) cnt++;
            if(cnt == 2) ans++;
       }
       cout << ans << "\n";
}
int main()
{
	fastio();
    uint t=1;
    sieve();
    //cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}