#include<iostream>
using namespace std;

void deleteAtSpecificPosition(int arr[],int &n,int &pos){

    if(pos>n || pos>n){
        cout<<"Invalid Position.";
        return;
    }
    for(int i=pos-1;i<n;i++){
        arr[i]=arr[i+1];
    }
    n--;
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the position to delete :";
    int pos;
    cin>>pos;
    deleteAtSpecificPosition(arr,n,pos);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}