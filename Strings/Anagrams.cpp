#include<iostream>
#include<algorithm>
using namespace std;

bool Anagrams(string s1,string s2){

    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());

    return s1==s2;
    // if(s1!=s2){
    //  return false;
    // }
    // return true;

}
int main(){
    string s1,s2;
    cout<<"Enter String1:";
    getline(cin,s1);
    cout<<"Enter String2:";
    getline(cin,s2);
    bool ok = Anagrams(s1,s2);
    if(ok){
        cout<<"The given two strings are Anagrams.";
    }else{
        cout<<"The given two strings are NOT Anagrams.";
    }

}