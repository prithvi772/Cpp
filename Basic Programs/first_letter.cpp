#include<iostream>
using namespace std;
int main(){
    string s;
    int count=0;
    cout<<"Enter String:";
    getline(cin,s);
     
    for(int i=0;i<s.size();i++){
        cout<<s[i]<<endl;
        if(s[i]==s[i]){
            count++;
        }
    }
    cout<<"Count:"<<count;
}