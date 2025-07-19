#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"How many numbers you want to enter in array:";
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
        cout<<"\nEnter number:"<<i+1<<" ";
        cin>>arr[i];
        for(int j=0;j<=i;j++){
            cout<<arr[j]<<" ";
        }

        // cout<<arr[i]<<endl;
    }
    cout<<endl<<"-------"<<endl;
    for(int i=0;i<num;i++){
        cout<<"Array elements are :"<<arr[i]<<endl;
    }
    for(int i=num-1;i>=0;i--){
        cout<<"Array elements in reverse order are:"<<arr[i]<<endl;
    }
}