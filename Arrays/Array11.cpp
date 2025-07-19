#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter Size of arrays:";
    cin >> size;
    int arr1[size];
    int arr2[size];
    int sumArr[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter number in Array1 where element no." << i+1 << ": ";
        cin >> arr1[i];
    }
    cout<<"---------------------------"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter number in Array2 where element no." << i+1 << ": ";
        cin >> arr2[i];
    }
    for (int i = 0; i < size; i++)
    {
        sumArr[i] = arr1[i] + arr2[i];
    }
    for(int i=0;i<size;i++){
        cout<<"\nSum Array at position:"<<i+1<<" :";
        cout<<sumArr[i];
    }
}