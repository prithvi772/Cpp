// ✅ 2. Calculate Sum of All Elements
#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3};
    int sum=0;
    for(int i=0;i<4;i++){
        cout<<"i="<<i<<" "<<endl;
        cout<<"Sum inside before:"<<sum<<" "<<endl;
        sum+=arr[i];
        cout<<"Sum inside after:"<<sum<<" "<<endl;
    }
    cout<<"Sum of the elements is :"<<sum;

}