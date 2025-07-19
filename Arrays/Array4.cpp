// Find Minimum of array.
#include<iostream>
using namespace std;
int main(){
    int arr[]={8,2,10,4,5,6};
    int min=arr[0];
    int length = sizeof(arr) / sizeof(arr[0]);  
    for(int i=0;i<length;i++){
        if(min>=arr[i]){
            min=arr[i];
        }
    }
    cout<<"Min:"<<min;

}
