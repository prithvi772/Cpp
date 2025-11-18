#include<iostream>
using namespace std;
void rotateRight(int arr[],int n,int k){
    k=k%n;
    for(int j=0;j<k;j++){
        int temp=arr[n-1];
        for(int i=n-1;i>0;i--){
            arr[i]=arr[i-1];
            // cout<<"iteration:"<<i<<" =";
            // for(int k=0;k<n;k++){
            //     cout<<arr[k]<<" ";
            // }
            // cout<<endl;  
        }
        arr[0]=temp;
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k;
    cout<<"How many numbers you want to rotate in right?";
    cin>>k;
    rotateRight(arr,n,k);
    cout<<"After left rotation.";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}