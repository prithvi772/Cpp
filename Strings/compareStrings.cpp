#include<iostream>
using namespace std;
void compareString(string s1,string s2){
    int i=0;
    while(s1[i]!='\0' && s2[i]!='\0'){//this loop satisfies the condition of 
                                    //s1=abc and s2=bca
        if(s1[i]>s2[i]){
            cout<<"String1 is greater than String2.";//character wise check.
            return ;
        }
        else if(s1[i]<s2[i]){
            cout<<"String2 is greater than String1.";
            return ;
        }
        
        i++;
    }
    if(s1[i]!='\0' && s2[i]!='\0'){//this condition satisfies both strings have 
        //                          reached the end and are same.
            cout<<"Both Strings are equal.";
            return ;
        }
        else if(s1[i]=='\0'){ // If string1 ends first it means string2 is greater
            cout<<"string2 is greater.";
        }
        else{
            cout<<"string1 is greater.";
        }
}

int main(){
    cout<<"Enter String1:";
    string s1;
    getline(cin,s1);
    cout<<"Enter String2:";
    string s2;
    getline(cin,s2);
    compareString(s1,s2);

}