#include<iostream>
using namespace std;

void insertSpecificPosition(int arr[],int &n,int &pos,int &num){
    n++;
    if(pos>n){
        cout<<"Invalid Position entered.";
        return;
    }
    for(int i=n;i>=pos;i--){
        arr[i]=arr[i-1];
        // cout<<"iteration"<<i<<"="<<endl;
        // for(int j=0;j<n;j++){
        //     cout<<arr[j]<<" ";
        // }
        // cout<<endl;
    }
    arr[pos-1]=num;


    //The below code is correct if the user know array indexing starts from 0;

    // for(int i=n;i>pos;i--){
    //     arr[i]=arr[i-1];
    //     }
    // arr[pos]=num;

}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int num;
    cout<<"Enter number to be inserted.";
    cin>>num;
    cout<<"Enter the position to insert :";
    int pos;
    cin>>pos;
    insertSpecificPosition(arr,n,pos,num);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}