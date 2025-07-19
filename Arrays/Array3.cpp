// Print Maximum from an array
#include <iostream>
using namespace std;
int main()
{
    int max;
    int arr[] = {1, 2, 3, 10, 8};
    max = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (max <= arr[i])
        {
            max = arr[i];
        }
    }
    cout << "Max:" << max;
}