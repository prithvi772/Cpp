#include<iostream>
using namespace std;
int main(){
    int num;
    int result=0;
    cout<<"Enter number to multiply:";
    cin>>num;
    for(int i=1;i<=10;i++){
        result=num*i;
        cout<<num<<" "<<"*" <<" "<<i<<" "<<"= "<<result <<"\n";
    }
    // cout<<"\n Result:"<<result;


}