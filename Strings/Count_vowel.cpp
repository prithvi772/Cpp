#include<iostream>
using namespace std;
int main(){
    string s;
    char     ch;
    int count=0;
    cout<<"Enter sentence:";
    getline(cin,s);
    // cin.ignore();
  
    for(int i=0;i<s.length();i++){
        ch=tolower(s[i]);
        if(ch=='a' ||ch=='e' ||ch=='i' ||ch=='o' ||ch=='u' ){
            count++;
        }
    }
    cout<<"Vowel:"<<count;
}