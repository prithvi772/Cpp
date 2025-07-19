#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter string you bitch:";
    getline(cin,s);
    // cout<<s;
    for(int i=s.length()-1;i>=0;i--){
        cout<<s[i];

    }
}