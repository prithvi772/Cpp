#include<iostream>
using namespace std;
void hollowRightAngleTri(int n){

    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            if(i==n || j==i ||j==1){
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
    int n=7;
    hollowRightAngleTri(n);
}