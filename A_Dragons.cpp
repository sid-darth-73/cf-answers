#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
 
void solver()
{
    int n,s;
    cin >> s >> n;
    int flag=0;
    // vector<int> x(n);

    // vector<int> y(n);
    // for(int i=0;i<n;i++)
    // {
    //     cin >> x[i];
    //     cin >> y[i];
    // }
    // sort(x.begin(),x.end());
    // for(int i=0;i<n;i++)
    // {
    //     if(s )
    // }
    // if(flag==0) cout << "YES\n";
    pair<int,int> pa[1000];
    for(int i=0;i<n;i++)
    {
        cin >> pa[i].first >> pa[i].second;
    }
    sort(pa,pa+n);
    

}
int main()
{
	fastio();
    // int t;
    // cin >> t;
    // while(t--)
    // {
        
    // }
    solver();
    return 0;
}