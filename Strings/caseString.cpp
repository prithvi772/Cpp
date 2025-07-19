#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter String:";
    getline(cin,s);
    string s1="";
    for(int i=0;i<s.length();i++){
        s1+=toupper(s[i]);
    }
    cout<<s1;
}