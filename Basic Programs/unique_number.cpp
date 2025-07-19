#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {10,9,10,9,8};
    int count=0;
    for(int i=0;i<5;i++)
    {
       count ^=arr[i];
    }
    cout << "\nCount:" << count;
}