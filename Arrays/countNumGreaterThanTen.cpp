// 🔢 Count how many numbers are > 10
#include<iostream>
using namespace std;
int main(){
    int num;
    int count=0;
    cout<<"How many number you want to enter:";
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
        cout<<"Enter number:"<<i+1<<"=";
        cin>>arr[i];
        if(arr[i]>10){
            count++;
        }
    }
    cout<<"Total numbers more than 10 are:"<<count;

}
