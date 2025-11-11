#include<iostream>
using namespace std;

void splitArray(int arr[],int n ){
    int num=n/2;
    for(int i=0;i<=num;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n--------------------------------"<<endl;
    for(int i=num;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);

    splitArray(arr,n);
}