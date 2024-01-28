#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);


// int mex(vector<int> &a)
// {
//     set<int> st;
//     if(a.size()==0) return 0;
//     int n = a.size();
//     vector<int> v;
//     int flag = 0;
//     int c=0;
//     for(int i=0; i<n ;i++)
//     {
//         st.insert(a[i]);
//     }
//     for(auto elem : st)
//     {
//         v.push_back(elem);
//     }
//     for(int k=1;k<v.size();k++)
//     {
//         if(v[k]-v[k-1] != 1)
//         {
//             flag=1;
//             return k;
//         }
//     }
//     return v.back()+1;
//     return -1;
// }
void solve()
{
    int n;
    cin >> n;
    unordered_map<int, int> m;
    for(int i=0;i<n;i++)
    {
        int elem;
        cin >> elem;
        m[elem]++;
    }
    int r1=-1; int r2=0; int flag=0;
    for(int i=0;i<=100;i++)
    {
        if(m[i]>1){
            if(!flag) r2 = i+1;
            continue;
        }
        if(m[i]==0)
        {
            r1 = i;
            break;
        }
        flag = 1;
    }
    cout << r1 + r2 << "\n";

}
int main()
{
    fastio();
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    
	return 0;
}