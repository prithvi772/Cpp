#include <iostream>
using namespace std;

int main()
{
    int arr[] = {8, 4, 6, 2, 9};
    int temp = 0;

    cout << "Initial array: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n\n";

    // Bubble sort with debug output
    for (int i = 0; i < 5 - 1; i++) // total n-1 passes
    {
        cout << "Pass " << i + 1 << ":\n";
        for (int j = 0; j < 5 - 1 - i; j++) // compare till last unsorted element
        {
            cout << "Comparing arr[" << j << "]=" << arr[j] << " and arr[" << j + 1 << "]=" << arr[j + 1] << endl;

            if (arr[j] > arr[j + 1])
            {
                // swap
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                cout << " => Swapped to: ";
                for (int k = 0; k < 5; k++)
                {
                    cout << arr[k] << " ";
                }
                cout << endl;
            }
        }

        // Print array after each pass
        cout << "Array after Pass " << i + 1 << ": ";
        for (int k = 0; k < 5; k++)
        {
            cout << arr[k] << " ";
        }
        cout << "\n\n";
    }

    // Final sorted array
    cout << "-----------------------------\n";
    cout << "Final Sorted Array: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
