#include<iostream>
using namespace std;

void Merge(int arr1[],int arr2[],int n1,int n2){
    int arr3[n1+n2];
    for(int i=0;i<n1;i++){
        arr3[i]=arr1[i];
    }
    int x=0;
    for(int i=n1;i<n1+n2;i++){
        arr3[i]=arr2[x];
        x++;
    }
    for(int i=0;i<n1+n2;i++){
        cout<<arr3[i]<<" ";
    }

}
int main(){
    int arr1[]={1,2,3,4,5};
    int arr2[]={6,7,8,9,10};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    Merge(arr1,arr2,n1,n2);
}