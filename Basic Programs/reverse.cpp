#include<iostream>
using namespace std;

int main(){
    int num;
    int rem=0;
    int rev=0;
    cout<<"Enter number:";
    cin>>num;
    cout<<"The Entered number is :"<<num<<"\n";


    // for(int i=0;i<num;i++)

    for(;num!=0;){  
        rem=num%10;//12,1
        cout<<"remain:"<<rem<<" ";
        rev=(rev*10)+rem;//3,2
        cout<<"rev:"<<rev<<" ";
        num=num/10; 
        cout<<"num:"<<num<<" ";
        cout<<"\nNext Iteration\n";

    }
    
    
    cout<<"\nreverse:"<<rev;


}
