#include<iostream>
using namespace std;
string copyOneToAnother(string s){
    string str="";
    for(int i=0;i<s.length();i++){
        str+=s[i];
    }

    //Without using length() function.
    // int i=0;
    // while(s[i]!='\0'){
    //     str+=s[i];
    //     i++;
    // }
    return str;
}

int main(){
    cout<<"Enter String:";
    string s;
    getline(cin,s);
    cout<<"\n--------------------------"<<endl;
    string copiedString=copyOneToAnother(s);
    cout<<"The copied String is:"<<copiedString;
}