// 🔍 Search a number and print its index
#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int num;
    cout<<"Enter number to search:";
    cin>>num;
    for(int i=0;i<5;i++){
        if(arr[i]==(num)){
            cout<<"index:"<<i;
        }
    }
}