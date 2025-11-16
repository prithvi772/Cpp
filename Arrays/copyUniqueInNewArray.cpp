    #include<iostream>
    #include<algorithm>
    using namespace std;
    void copyUniqueInNewArray(int arr[],int n){
        sort(arr,arr+n);
        int arr1[n];
        int x=0;
        arr1[x]=arr[0];
        for(int i=1;i<n;i++){
            if(arr1[x]!=arr[i]){
                x++;
                arr1[x]=arr[i]; 
            }
        }
        for(int i=0;i<=x;i++){
            cout<<arr1[i]<<" ";
        }

    }
    int main(){
        int arr[]={1,2,1,2,3,4,5,5,6,6,7,8,8,8,8,8};
        int n=sizeof(arr)/sizeof(arr[0]);
        copyUniqueInNewArray(arr,n);
    }