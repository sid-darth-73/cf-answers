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

void ans()
{
    cout << fixed << setprecision(10);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int mx = *max_element(a.begin(),a.end());
    ll sum = accumulate(a.begin()+1,a.end(),0);
    //cout << 1.0 * (sum - mx) / (n - 1) + mx << "\n";
    cout << sum << " " << mx << endl;
    
}
int main()
{
	fastio();
    int t;
    cin >> t;
    while(t--)
    {
        ans();
    }
    return 0;
}




