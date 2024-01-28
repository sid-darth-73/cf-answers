#include <iostream>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long count = 0;
        long long n;
        cin >> n;
        for(int i=1; i<=9; ++i){
            long long start = i;
            while(start<=n){
                count ++;
                start = start*10 + i;
            }

        }
        cout << count << endl;
        
    }



    return 0;
}
