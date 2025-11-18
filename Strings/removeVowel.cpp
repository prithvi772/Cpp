#include <iostream>
using namespace std;
string removeVowel(string s){
    int x=0;
    for(int i=0;i<s.length();i++){
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u'){
            s[x]=s[i];
            x++;
        }
    }
    return s.substr(0,x);
}
int main()
{
    string s = "icecream";
    cout<<removeVowel(s);
}