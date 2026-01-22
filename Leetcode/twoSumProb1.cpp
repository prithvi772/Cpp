#include <iostream>
using namespace std;

void twoSum(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                cout << "Incides are:" << i << " " << j << endl;
                return ;

            }

        }

    }

}
int main()
{
    int arr[] = {11, 2, 7, 15};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target = 9;
    int sumArr[]={0};
    twoSum(arr,n,target);
}