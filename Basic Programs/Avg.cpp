#include<iostream>
using namespace std;
int main(){
    int num,number;
    int sum=0;
    int avg=0;
    cout<<"How many numbers to find average:";
    cin>>num;

    for(int i=1;i<=num;i++){
        cout<<"Enter number "<<i<<":";
        cin>>number;
        sum=sum+number;
        avg=sum/num;
    }
    cout<<"Average:"<<avg;

}