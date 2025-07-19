#include<iostream>
using namespace std;
int main (){
    int num;
    cout<<"Enter number:";
    cin>>num;
    int sum=0;

    for (int i=0;i<=num;i++){
        sum=sum+i;
        // cout<<" "<<i<<" ";
    }
    cout<<"Sum is:"<<sum;


}