#include<iostream>
using namespace std;
int maxpos(int arr[],int n){
    int max=0;
    int pos=0;
    for(int i=0;i<n;++i){
        if(arr[i]>max){
            max=arr[i];
            pos=i;
        }
    }
    return pos;
    return 0;
}
int minpos(int arr[],int n){
    int min=INT_MAX;
    int pos=0;
    for(int i=0;i<n;++i){
        if(arr[i]<=min){
            min=arr[i];
            pos=i;
        }
    }
    return pos;
    return 0;
}
int main(){
    int n;
    cin >> n;
    int t=0;
    int arr[n];
    for(int i=0;i<n;++i) cin >> arr[i];
    if(maxpos(arr,n)<minpos(arr,n)){
        cout << maxpos(arr,n)+n-1-minpos(arr,n);
    }
    else{
        cout << maxpos(arr,n)+n-2-minpos(arr,n);
    }

    return 0;
}