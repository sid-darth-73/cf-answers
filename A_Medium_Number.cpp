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
    uint a,b,c;
    cin >> a >> b >> c;
    uint arr[3];
    arr[0]=a;
    arr[1]=b;
    arr[2]=c;
    sort(arr,arr+3);
    cout << arr[1] << "\n";

}
int main()
{
	fastio();
    int t;
    cin >> t;
    while(t--)
    {
        solve();
        
    }
    return 0;
}