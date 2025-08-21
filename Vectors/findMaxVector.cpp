#include <iostream>
#include <vector>
using namespace std;

int findMax(vector<int> &v)
{

    int max = v[0];

    for (int i = 0; i < v.size(); i++)
    {
        if (max < v[i])
        {
            max = v[i];
        }
    }
    return max;
}
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    int maxEle = findMax(v);
    cout << "Max element in the vector is:" << maxEle;
}