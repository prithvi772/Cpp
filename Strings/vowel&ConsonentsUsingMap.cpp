#include<iostream>
#include<map>
using namespace std;
void vowelCount(string s){
    int count=0;
    int consonents=0;
    map <char,int> freq={
        {'a',0},
        {'e',0},
        {'i',0},
        {'o',0},
        {'u',0}
    };

    for(int i=0;s[i]!='\0';i++){

        char ch=s[i];
        // if(ch >= 'A' && ch <= 'Z'){
        //     ch = ch + 32;
        // }

        ch = tolower(ch);   

        if(freq.find(ch)!=freq.end()){
            freq[ch]++;
            count++;
        }
        else{
            consonents++;

        }
    }
    cout<<"There are "<<count<<" vowels, and "<<consonents<<" consonents."<<endl;
    for(auto prithvi : freq){
        if(prithvi.second>0){
            cout<<"vowel "<<prithvi.first<<" occured "<<prithvi.second<<" times."<<endl;
        }
    }
}
int main(){
    string s;
    cout<<"Enter String:";
    getline(cin,s);
    vowelCount(s);
}