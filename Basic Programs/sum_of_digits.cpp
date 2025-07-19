#include<iostream>
using namespace std;

int main(){
//123 = 6;
int sum=0;
int num,rem;
cout<<"Enter number:";
cin>>num;

for(;num!=0;){
    rem=num%10;
    cout<<"\nrem:"<<rem;
    sum=sum+rem;
    cout<<"\nSum:"<<sum;
    num=num/10;
    cout<<"\nnum:"<<num;
    cout<<"\nNext iteration:\n";
}
cout<<"sum:"<<sum;
}