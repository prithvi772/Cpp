#include<iostream>
using namespace std;
int main(){
    int prev=0;
    int next=1;
    int result;
    for (int i=0;i<=10;i++){
        cout<<prev<<" "<<next;
        result=prev+next;
        cout<<result;
        prev=result;
        next=next+result;
        
    }


}
