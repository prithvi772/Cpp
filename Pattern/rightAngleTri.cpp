#include<iostream>
using namespace std;
void rightAngleTri(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

}
int main(){
    int n=5;
    rightAngleTri(n);
}