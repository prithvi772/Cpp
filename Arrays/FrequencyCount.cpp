// 🔁 Count frequency of each element (like 1 occurs 2 times, etc.)
#include<iostream>
#include<map>
using namespace std;

void freqCount(int arr[],int n){
    map<int,int> freq;
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    for(auto x:freq){
        cout<<x.first<<" has occured "<<x.second<<" times"<<endl;
    }

}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    freqCount(arr,n);
}
