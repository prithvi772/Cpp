// Write a C++ program that asks the user to enter numbers repeatedly.
// The program should stop only when the user enters 0, and then display the sum of all entered numbers (excluding 0).
#include<iostream>
using namespace std;
int main(){
    int num;
    int sum=0;
    while(num!=0){ 
        cout<<"Enter number:";
        cin>>num;
        sum=sum+num;
    }
    cout<<"Sum:"<<sum;
}