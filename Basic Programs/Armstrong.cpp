#include<iostream>
using namespace std;

int main(){
int sum=0;
int num,rem;
cout<<"Enter number:";
cin>>num;
int temp=num;
for(;num!=0;){
    rem=num%10;
    cout<<"\nrem:"<<rem;
    sum=sum+(rem*rem*rem);
    cout<<"\nSum:"<<sum;
    num=num/10;
    cout<<"\nnum:"<<num;
    cout<<"\nNext iteration:\n";
}
if(sum==temp){
    cout<<temp<<" is Armstrong.";
}
else{
    cout<<temp<<" is Not Armstrong.";
}
}