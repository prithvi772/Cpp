// 🔁 Count frequency of each element (like 1 occurs 2 times, etc.)
#include<iostream>
using namespace std;
int main(){
    int arr[]={45,45,46,58,78,58};
    int count=0;
    for(int i=0;i<7;i++){
        for(int j=i;j<7;j++){
            cout<<"Inside:"<<"i="<<i<<" j="<<j<<endl;
            if(arr[i]==arr[j]){
                cout<<"If condition:"<<"i="<<arr[i]<<" j="<<arr[j]<<endl;
                count++;
                cout<<"Count Inside:"<<count<<endl;
            }
        }
        cout<<arr[i]<<":occurs:"<<count<<"times.";
    }

}