#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
 
void solver()
{
    int n,m,a,b;
    cin >> n >> m >> a >> b;
    int rat = n/m;
    int c = rat*b + (n - m*rat)*a;
    int c2 = n*a;
    int c3 = (rat + 1)*b;
    int x = min(c2,c3);
    int y = min(x,c);
    cout << y << "\n";
}
int main()
{
    // int t;
    // t = 1;
    // while(t--)
    // {
    //     solver();
    // }
    solver();
    return 0;
}