#include<iostream>
using namespace std;
void insertAtFirst(int arr[],int &n,int num){
    n++;
    for(int i=n;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=num;
}

// void insertAtLast(int arr[],int &n,int num){
//     n++;
//     arr[n-1]=num;
// }

void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int num;
    cout<<"Enter number to be inserted.";
    cin>>num;
    insertAtFirst(arr,n,num);
    // insertAtLast(arr,n,num);
    cout<<"After insertion:"<<endl;
    display(arr,n);
}