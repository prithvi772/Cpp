#include<iostream>
using namespace std;

void countNumberAlphaSymbols(string s){
    int cntAlpha=0;
    int cntNum=0;
    int cntSym=0;

    for(int i=0; s[i] != '\0'; i++){

        if( (s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') ){
            cntAlpha++;
        }
        else if(s[i]>='0' && s[i]<='9'){
            cntNum++;
        }
        else{
            cntSym++;
        }
    }

    cout<<"Alphabets: "<<cntAlpha<<endl;
    cout<<"Numbers: "<<cntNum<<endl;
    cout<<"Symbols: "<<cntSym<<endl;
}

int main(){
    string s;
    cout<<"Enter String: ";
    getline(cin, s);
    countNumberAlphaSymbols(s);
}
