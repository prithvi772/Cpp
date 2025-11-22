#include<iostream>
using namespace std;
int singleNumber(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans^=arr[i];
    }
    return ans;



    //unordered_map<int,int> freq;
    //     for(int i=0;i<nums.size();i++){
    //         freq[nums[i]]++;
    //     }
    //    for(int i=0;i<nums.size();i++){
    //        if(freq[nums[i]]==1){
    //         return nums[i];
    //        }
    //    }
    //    return -1;
       
}
int main(){
    int arr[]={1,2,1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<singleNumber(arr,n);
}