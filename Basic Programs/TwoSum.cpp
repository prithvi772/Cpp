#include <iostream>
using namespace std;
int main()
{
    int arr[] = {11, 2, 7, 15};
    int target = 9;
    int sumArr[]={0};
    
    for (int i = 0; i < 4; i++)
    {
        for (int j = i+1; j < 4; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << "Incides are:" << i << " " << j << endl;
                
            }
        }
    }
}