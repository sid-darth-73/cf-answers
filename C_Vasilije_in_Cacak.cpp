#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void solver(){ 
    ll n; 
    cin >> n; 
    string s; 
    cin >> s; 
    ll i = n-1; 
    vector<string> v; 
    while(i >= 0){ 
        if(s[i]=='b' || s[i]=='c' || s[i]=='d'){ 
            v.push_back(s.substr(i-2,3)); 
            i -= 3; 
        } 
        else{ 
            v.push_back(s.substr(i-1,2)); 
            i -= 2; 
        } 
    } 
    for(ll i=v.size()-1;i>=0;i--){ 
        cout<<v[i]; 
        if(i)cout<<"."; 
    } 
    cout << "\n"; 
} 
 
int main(){
    int t;
    cin >> t;
    while(t--){
        solver();
    }
    return 0;
}

