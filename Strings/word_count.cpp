#include<iostream>
using namespace std;
int wordCount(string s){
    int count=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==' ' && s[i-1]!=' ' && i!=0){
            count++;
        }
    }
    return count+1;
}
int main(){
    string s1;
    cout<<"Enter String:";
    getline(cin,s1);
    cout<<s1;
    int count=wordCount(s1);
    cout<<"There are "<<count<<" words the sentence.";
}
