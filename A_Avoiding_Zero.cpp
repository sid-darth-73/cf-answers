#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        vector <int> v;
        int n;
        cin >> n;
        for(int i=0; i<n; ++i){
            int a;
            cin >> a;
            v.push_back(a);
        }
        vector <int> v1;
        vector <int> v2;
        for(auto x : v){
            if(x<0) v2.push_back(x);
            else v1.push_back(x);
        }
        sort(v1.begin(),v1.end());
        for(auto x : v1){
            cout << x << " ";
        }
        sort(v2.begin(),v2.end());
        cout << "\n";
        for(auto x: v2){
            cout << x << " ";
        }

    }
    
    return 0;
}