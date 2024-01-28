#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
int divcount(ll n){
    int sum=0;
    for(ll i=2;i<n;++i){
        if(n%i==0) sum++;
        if(sum>1)
        {
            break;
        }
    }
    return sum;
    return 0;
}
const int N = 10000000;;
vector<bool> primus(N,true); 
int main()
{
    primus[0] = primus[1] = false;
    for(int i = 2; i<N; i++)
    {
        if(primus[i] == true)
        {
            for( int j=2*i ; j<N; j+=i)
            {
                primus[j] = false;
            }
        }
    }
    for(int i=2;i<100;i++)
    {
        if(primus[i] == 1) cout << i << " is a prime\n";
    }
 
    return 0; 
} 
