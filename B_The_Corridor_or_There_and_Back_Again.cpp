#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
void solver()
{
    int n;
    cin >> n;
    int d[n];
    int s[n];
    for(int i=0;i<n;i++)
    {
        cin >> d[i];
        cin >> s[i];
    }
    int ans = INT_MAX;
    int temp;
    for(int i=0;i<n;i++)
    {
        temp = d[i] + (s[i]-1)/2;
        ans = min(ans,temp);
    }
    cout << ans << "\n";
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