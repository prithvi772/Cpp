#include <iostream>
using namespace std;
int main()
{
    int arr[] = {8, 4, 6, 2, 9};
    
    int temp=0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            
            if (arr[j] > arr[j + 1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;   
            }
        }
    }
    cout << "------------------" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Array:" << arr[i] << endl;
    }

    
}