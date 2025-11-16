#include <iostream>
#include <climits>
using namespace std;
int ThirdLargest(int arr[], int n)
{
    int max = INT_MIN;
    int second = INT_MIN;
    int third = INT_MIN;
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

        if (arr[0] > arr[1])
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
    for (int i = 0; i < n; i++)
    {

        if (max <= arr[i])
        {
            third = second;
            second = max;
            max = arr[i];
        }
        else if (arr[i] > second && max > arr[i])
        {
            second = arr[i];
        }
        else if (arr[i] > third && second > arr[i])
        {
            third = arr[i];
        }
    }
    return third;
}
int main()
{
    int arr[]={1,1,2};
    // int arr[] = {};
    // int arr[] = {30};
    // int arr[] = {30,20};
    // int arr[] = {10,20,30};
    // int arr[] = {50,40,30,20};
    int arr[] = {30,20,20,10};

    int n = sizeof(arr) / sizeof(arr[0]);
    cout << ThirdLargest(arr, n);
}