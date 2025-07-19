#include<iostream>
using namespace std;
int main(){
    int count=0; 
    for(int i=1;i<=5;i++){ //1 1<5 y
        count++;
        cout<<"Row No:"<<count<<" ";

        for(int j=1;j<=5;j++){// 1<6 y  1<5 1<4 
            cout<<j;    //1 
        }
        cout<<"\n";
    }
}