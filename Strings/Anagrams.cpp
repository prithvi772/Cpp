#include<iostream>
#include<algorithm>
using namespace std;

bool Anagrams(string s1,string s2){

    if(s1.length()!=s2.length()){
        return false;
    }
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());

    // for(int i=0;i<s1.length();i++){
    //     if(s1[i]!=s2[i]){
    //         return false;
    //     }
    // }
    // return true;

    return s1==s2; // this line has hidden code as mentioned above 


}
int main(){
    string s1,s2;
    cout<<"Enter string 1:";
    getline(cin,s1);
    cout<<"Enter string 2:";
    getline(cin,s2);
    if(Anagrams(s1,s2)){
        cout<<"String1 and String2 are Anagrams";
    }
    else{
        cout<<"String1 and String2 are not Anagrams";
    }
}
