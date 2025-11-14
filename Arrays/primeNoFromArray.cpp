#include<iostream>
using namespace std;
bool Prime(int n){
   if(n<=1){
        return false;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int num : arr){
        if(Prime(num)){
            cout<<num<<" ";
        }
    }
}