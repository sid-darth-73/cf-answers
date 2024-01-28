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
    cout << fixed << setprecision(10);
    float a,b,c;
    cin >> a >> b >> c;
    float m1 = (-b + sqrt(b*b - 4*a*c))/(2*a);
    float m2 = (-b - sqrt(b*b - 4*a*c))/(2*a);
    if(m1 >= m2)
    {
        cout << m1 << "\n" << m2;
    }
    else cout << m2 << "\n" << m1;
}
int main()
{
	
    return 0;
}