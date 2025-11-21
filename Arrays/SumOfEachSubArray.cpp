#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        int sumArr = 0;
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << " ";
            }
            cout << endl;
            sumArr += arr[j];
            cout << "Sum of SubArray from i:" << i << " to j:" << j << " is=" << sumArr << endl;
        }
        // cout<<endl;
    }
}