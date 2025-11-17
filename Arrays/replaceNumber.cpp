// 🔁 Replace even numbers with 100
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"How many numbers you want to enter:";
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
        cout<<"Enter number:"<<i+1<<" ";
        cin>>arr[i];
        if(arr[i]%2==0){
            arr[i]=100;
        }
        for(int j=0;j<=i;j++){
        cout<<arr[j]<<endl;
    }

    }
    cout<<"Replaced Array is:"<<endl;
    for(int i=0;i<num;i++){
        cout<<arr[i]<<" ";
    }
}
