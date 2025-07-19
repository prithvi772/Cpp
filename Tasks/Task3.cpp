// Write a program to count how many even and odd digits are present in an integer entered by the user
#include<iostream>
using namespace std;
int main(){
    int num,count=0;
    int oddnum=0;
    int Evennum=0;
    cout<<"Enter number:";
    cin>>num;
    while(num!=0){
        if(num%2==0){
            cout<<"Even num in loop:"<<num<<endl;
            Evennum+=1;
            cout<<"Eve:"<<Evennum<<" "<<endl;
        }
        else if(num%2!=0){
            cout<<"Odd num in loop:"<<num<<endl;
            oddnum+=1;
             cout<<"od:"<<oddnum<<" "<<endl;
        }
        count+=1;
        num=num/10;
    }
    cout<<"Total number of digits:"<<count<<endl;
    cout<<"Odd Numbers:"<<oddnum<<endl;
    cout<<"Even Numbers:"<<Evennum;


}