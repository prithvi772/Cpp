#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number:";
    cin>>num;
    int temp=num;
    
    int rev=0,rem;

    while(temp!=0){
        rem=temp%10;
        rev=(rev*10)+rem;
        temp=temp/10;
    }
    cout<<"reverse :"<<rev<<"\n";
    
    if(num==rev){
        cout<<"The entered number: "<<num<<" is Palindrome";
    }
    else{
        cout<<num<<" is not a Palindrome";

    }
    


}