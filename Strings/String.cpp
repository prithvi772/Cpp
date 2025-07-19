#include<iostream>
using namespace std;
int main(){
    string s1,s2;
    cout<<"Enter String1:";
    cin>>s1;
    cout<<"Hello "<<s1<<endl;
    cin.ignore(); 
    cout<<"Enter full name:";
    getline(cin,s2);
    cout<<"Full name:"<<s2;
}