#include<iostream>
#include<unordered_map>
using namespace std;
void Occurence(string s){
    unordered_map<char,int> freq;
    for(int i=0;i<s.length();i++){
        freq[s[i]]++;
    }

    for(auto x:freq){
        cout<<x.first<<" occured "<<x.second<<" times"<<endl;
    }

}
int main(){
    string s1;
    cout<<"Enter string:";
    getline(cin,s1);
    Occurence(s1);
}