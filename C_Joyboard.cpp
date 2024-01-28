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
int boom = 1000000;
void solve()
{
    vector<bool> v(boom,true);
    v[0] = false;
    v[1] = false;
    for(int i=2;i<boom; i++)
    {
        if(v[i])
        {
            for(int j=2*i; j<boom ; j = j+i)
            {
                v[j] = false;
            }
        }
    }

    for(int i=0;i<100;i++)
    {
        if(v[i]) cout << i << " ";
    }
}
int main()
{
	fastio();
    uint t=1;
    //cin >> t;
    while(t--) solve();
    return 0;
}