#include<iostream>
using namespace std;
int main(){
    int num;
    int even=0;
    int odd=0;
    cout<<"How many numbers:";
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
        cout<<"Enter number "<<i+1<<":";
        cin>>arr[i];
    }
    for(int j=0;j<num;j++){
        if(arr[j]%2==0){
            even++;
        }
        else{ 
            odd++;
        }
    }
    cout<<"Total Even numbers:"<<even<<endl;
    cout<<"Total Odd numbers:"<<odd;
    }