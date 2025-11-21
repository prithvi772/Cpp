#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int> nums) // Best Approach --> Boyer–Moore Voting Algorithm
{
    int freq = 0;
    int majorityElement = nums[0];
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (freq == 0)
        {
            majorityElement = nums[i];
        }
        if (majorityElement == nums[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }
    return majorityElement;
}
int main()
{
    vector<int> v1 = {3,4,4,3,4,5,4};
    int num = majorityElement(v1);
    cout << num;
    return 0;
}
