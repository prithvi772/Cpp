#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"How many numbers you want to enter in array."<<endl;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
        cout<<"Enter number:"<<i+1<<" ";
        cin>>arr[i];
    }
    for(int i=0;i<num;i++){
        cout<<"Array elements are:"<<arr[i]<<endl;
    }
}