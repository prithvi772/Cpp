#include<iostream>
using namespace std;
void mirrorHollowRightAngleTri(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(j==1 || i==n || j==i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl; 
    }

}
int main(){
    int n=8;
    mirrorHollowRightAngleTri(n);
}