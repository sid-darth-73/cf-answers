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

int solver()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &i: a) cin >> i;
    sort(a.begin(),a.end());
    //int sum=1;
    for (int i = n - 1; i >= 0; i--) 
    {
        if(a[i] <= i + 1) 
        {
            cout << i + 2 << "\n";
            return 0;
        }
    }
    cout <<"1\n";
    return 0;
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