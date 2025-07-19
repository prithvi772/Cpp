#include<iostream>
using namespace std;
int main(){
    float Avg=0;
    int i=1;
    float sum=0;
    do{
        sum=sum+i;
        // Avg=sum/10;
        
        cout<<i<<" ";
        if(i>=10){
            break;
        }
        i++;


    }while (i<=10);
    cout<<"\nSum:"<<sum;
    Avg=(sum)/10;
    cout<<" Avg:"<<Avg;
}