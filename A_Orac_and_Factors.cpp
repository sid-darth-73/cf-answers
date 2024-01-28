#include<iostream>
using namespace std;
int main(){
    int t;
    long long n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int ans = 0;
        if(n % 2 == 0){
            ans = n + (2*k);
        }
        else{
            for(int i=3; i<=n; i++){
                if(n % i == 0){
                    n +=i;
                    k--;
                    break;
                }   
            }
            ans = n + (2*k);
        }
        cout<<ans<<endl;
    }

    return 0;
}
    