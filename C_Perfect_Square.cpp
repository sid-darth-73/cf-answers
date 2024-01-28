//Siddharth Raj
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using uint = unsigned int;
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int MAX=2000;
int n;
string a[MAX];
int solve() 
{
    uint ans = 0;
    for (int i = 0; i*2 < n; ++i)
    {
        for (int j = 0; j*2 < n; ++j) 
        {
            vector<char> v {a[i][j], a[n - 1 - j][i], a[n - 1 - i][n - 1 - j], a[j][n - 1 - i]};
            char big = *max_element(v.begin(),v.end());
            for(char e: v)
                ans += big - e;
        }
    }
    return ans;
}

int main() 
{
    fastio();
    uint t; 
    cin >> t;
    while (t--) 
    {
        cin >> n;
        for (int i = 0; i < n; ++i) cin >> a[i];
        cout << solve() << endl;
    }
}
