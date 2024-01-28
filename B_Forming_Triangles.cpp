#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define ff first
#define ss second
#define pb push_back;
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void aolver()
{
    int n;
    cin >> n;
    map<int, int> lencnt;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        lencnt[x]++;
    }
    
    ll ans = 0;
    int sum = 0;
    for (auto it : lencnt) 
    {
        ll count = it.second;
        if(count >= 3) ans += count * (count - 1) * (count - 2) / 6;
        if(count >= 2) ans += count * (count - 1) / 2 * sum;
        sum += count;
    }
    
    cout << ans << "\n";
}
int main() {
    int t;
    cin >> t;
    while(t--)
    {
        aolver();
    }
    return 0;
}