#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
void solver()
{
    ll a,b,c;
    cin >> a >> b >> c;
    int arr[3]= {a,b,c};
    sort(arr,arr+3);
    
    if(arr[1]%arr[0] != 0 || arr[2]%arr[0] != 0)
    {
        cout << "NO\n";
    }
    else
    {
        if(arr[1]/arr[0] + arr[2]/arr[0] - 1 - 1 <= 3) cout << "YES\n";
        else cout << "NO\n";
    }
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