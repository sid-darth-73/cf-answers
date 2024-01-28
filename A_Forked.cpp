#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
void solver()
{
    int a,b,xk,yk,xq,yq;
    int ans=0;
    set<pair<int,int>> v;
    v.insert({xk+a,yk+b});
    v.insert({xk-a,yk+b});
    v.insert({xk+a,yk-b});
    v.insert({xk-a,yk-b});
    swap(a,b);
    v.insert({xk+a,yk+b});
    v.insert({xk-a,yk+b});
    v.insert({xk+a,yk-b});
    v.insert({xk-a,yk-b});
    set<pair<int,int>> v2;
    v2.insert({xq+a,yq+b});
    v2.insert({xq-a,yq+b});
    v2.insert({xq+a,yq-b});
    v2.insert({xq-a,yq-b});
    swap(a,b);
    v2.insert({xq+a,yq+b});
    v2.insert({xq-a,yq+b});
    v2.insert({xq+a,yq-b});
    v2.insert({xq-a,yq-b});
    for(auto elem : v)
    {
        if(v2.find(elem) != v2.end()) ans++;
    }

    cout << ans << '\n';

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