#include<iostream>
#include<climits>
using namespace std;
int secondSmallest(int arr[],int n){
    int min=INT_MAX;
    int second=INT_MAX;
    for(int i=0;i<n;i++){
        if(min>=arr[i]){
            second=min;
            min=arr[i];
        }else if(arr[i]>min && arr[i]<second){
            second=arr[i];
        }
    }
    return second;
}
int main(){
    int arr[]={8,9,10,4,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<secondSmallest(arr,n);
}