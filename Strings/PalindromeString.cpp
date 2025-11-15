#include<iostream>
using namespace std;
int main(){
    string s;
    string s1="";
    cout<<"Enter String:";
    getline(cin,s);
    for(int i=s.length()-1;i>=0;i--){
        s1+=s[i];
        
    }
    cout<<"Reversed:"<<s1<<endl; 
    if(s==s1){
        cout<<"Palindrome.";
    }
    else{
        cout<<"Not Palindrome.";

    }

}

#include<iostream>
using namespace std;
bool palindrome(string s){
    int i=0;
    int j=s.length()-1;
    while(i<j){
        if(s[i]!=s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;

}
int main(){
    string s;
    cout<<"Enter String:";
    getline(cin,s);
    if(palindrome(s)){
        cout<<"palindrome.";
    }
    else{
        cout<<" Not palindrome.";
    }
}
