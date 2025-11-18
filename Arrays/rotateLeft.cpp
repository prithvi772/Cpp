#include<iostream>
using namespace std;
void rotateLeft(int arr[],int n,int k){
    k=k%n;
    for(int j=0;j<k;j++){
        int temp=arr[0];
        for(int i=0;i<n-1;i++){
            arr[i]=arr[i+1];
        }
        arr[n-1]=temp;
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k;
    cout<<"How many numbers you to rotate in left?";
    cin>>k;

    rotateLeft(arr,n,k);
    cout<<"After left rotation.";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}