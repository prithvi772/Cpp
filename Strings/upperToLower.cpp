// uppercase to lowecase without using built-in function.
#include<iostream>
using namespace std;
int main(){
    string s1;
    cout<<"Enter string:";
    getline(cin,s1);
    for(int i=0;i<s1.length();i++){
        if(s1[i]>'A' && s1[i]<'Z'){
            s1[i]=s1[i]+32;
        }

    }
    cout<<s1;
}