#include <iostream>
using namespace std;
void dlc(int n){
    if(n%3==0){
        cout << n/3 << " " << n/3;
    }
    else if(n%3==2){
        cout << n/3 << " "<< n/3 + 1;
 
    }
    else{
        cout << n/3 + 1 << " " << n/3;
    }
}
 
 
 
int main(){
    int t;
    cin >> t;
    while(t){
        int n;
        cin >> n;
        dlc(n);
        cout << "\n";
        t=t-1;       
    }
   
    
    return 0;
}