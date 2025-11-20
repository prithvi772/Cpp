#include<iostream>
using namespace std;

void deleteAtFirstPosition(int arr[],int &n){
    for(int i=0;i<n;i++){
        arr[i]=arr[i+1];
    }
n--;
}
// void deleteAtLastPosition(int arr[],int &n){
//     n--;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    deleteAtFirstPosition(arr,n);
    display(arr,n);
    cout<<"\n-----------------------------"<<endl;
    // deleteAtLastPosition(arr,n);
}