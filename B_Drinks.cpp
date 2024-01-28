#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void sove()
{
    double n;
    cin >> n;
    double sum=0;
    for(int i=0;i<n;i++)
    {
        double d;
        cin >> d;
        sum+=d;
    }
    cout << setprecision(14) << sum/n;
}
int main()
{
	fastio();
    int t;
    t=1;
    while(t--)
    {
      sove();  
    }
    return 0;
}