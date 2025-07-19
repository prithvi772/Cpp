#include<iostream>
using namespace std;
int main(){
    string s;
    string s1="";
    cout<<"Enter String:";
    getline(cin,s);
    for(int i=s.length()-1;i>=0;i--){
        s1+=s[i];
        
    }
    cout<<"Reversed:"<<s1<<endl; 
    if(s==s1){
        cout<<"Palindrome.";
    }
    else{
        cout<<"Not Palindrome.";

    }

}