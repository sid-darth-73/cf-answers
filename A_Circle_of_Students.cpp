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

void solve()
{
    int n;
    cin >> n;
    int m = 0;
    int p = 0;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        int elem;
        cin >> elem;
        arr[i] = elem;
    }
    for(int i=0 ; i<n-1 ; i++)
    {
        if(abs(arr[i+1] - arr[i]) != 1 && abs(arr[i+1] - arr[i]) != n-1) m=1;

    }
    if(m == 1) 
    {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    return;
}
int main()
{
	fastio();
    uint t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}