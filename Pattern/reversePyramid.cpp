#include<iostream>
using namespace std;
void pattern(int n){
    int num=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j<num){
                cout<<" ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
        num++;
    }

}
int main(){
    int n=5;
    pattern(n);
}