//reverse an array.
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    int length=sizeof(arr)/sizeof(arr[0]);
    for(int i=length-1;i>=0;i--){
        cout<<arr[i]<<endl;

    }

}