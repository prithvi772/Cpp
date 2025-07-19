#include<iostream>
using namespace std;
int main(){
    int num;
    int rem=0;
    int rev=0;
    int count=0;
    cout<<"Enter number:";
    cin>>num;
     while(num!=0){  
        rem=num%10;//12,1
        cout<<"remain:"<<rem<<" ";
        count++;
        num=num/10; 
        cout<<"num:"<<num<<" ";
        cout<<"\nNext Iteration\n";

    }
    cout<<"The total number of digits in the entered number is:"<<count;   
}