#include<iostream>
#include<climits>
using namespace std;
int secondSmallest(int arr[],int n){
    int min=INT_MAX;
    int second=INT_MAX;
    int third=INT_MAX;

     if (n < 1)
    {
        cout << "There are no elements in the array.";
        return 0;
    }

    if (n < 2)
    {
        return arr[0];
    }
    if (n < 3)
    {
        //return min(arr[0],arr[1]);

        if (arr[0] < arr[1])
        {
            third = arr[1];
            return third;
        }
        else
        {
            third = arr[0];
            return third;
        }
    }
    
    for(int i=0;i<n;i++){
        if(min>arr[i]){
            third=second;
            second=min;
            min=arr[i];
        }
        else if(arr[i]>min && second>arr[i]){
            second=arr[i];
        }
         else if(arr[i]>second && third>arr[i]){
            third=arr[i];
        }
    }
    return third;
    
}
int main(){
    int arr[]={15,9,10,4,6,8};
    // int arr[]={9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<secondSmallest(arr,n);
}