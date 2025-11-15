#include<iostream>
#include<algorithm>
using namespace std;
void removeDuplicates(int arr[],int n){
    sort(arr,arr+n);
    int x=0;
    for(int i=1;i<n;i++){
        if(arr[x]!=arr[i]){
            x++;
            arr[x]=arr[i];
        }

    }
    for(int i=0;i<=x;i++){
        cout<<arr[i]<<" ";
    }

}
int main(){
    int arr[]={1,1,2,2,3,4,4,5,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    removeDuplicates(arr,n);
    
}
