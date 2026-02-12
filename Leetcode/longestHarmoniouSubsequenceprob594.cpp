#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

//Sliding Window Approach - O(n log n) time complexity due to sorting
// class Solution
// {
// public:
//     int findLHS(vector<int> &nums)
//     {
//         sort(nums.begin(), nums.end());
//         int left = 0;
//         int maxLen = 0;
//         for (int right = 0; right < nums.size(); right++)
//         {

//             if (nums[right] - nums[left] == 1)
//             {
//                 maxLen = max(maxLen, right - left + 1);
//             }
//             while (nums[right] - nums[left] > 1)
//             {
//                 left++;
//             }
//         }

//         return maxLen;
//     }
// };

// unordered_map Approach - O(n) time complexity
class Solution
{
public:
    int findLHS(vector<int> &nums)
    {
        unordered_map<int, int> freq;

        for (int i = 0; i < nums.size(); i++)
        {
            freq[nums[i]]++;
        }

        int maxLen = 0;

        for (auto it : freq)
        {
            int num = it.first;

            if (freq.find(num + 1) != freq.end())
            {
                int len = freq[num] + freq[num + 1];
                maxLen = max(maxLen, len);
            }
        }

        return maxLen;
    }
};

int main()
{
    Solution sol;

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cout << "Longest Harmonious Subsequence Length: "
         << sol.findLHS(nums) << endl;

    return 0;
}
