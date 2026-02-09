#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (i % 2 == 0)
                sum += nums[i];
        }
        return sum;
    }
};

int main() {
    Solution sol;

    int n;
    cout << "Enter number of elements (even): ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    cout << "Maximum sum of mins: " << sol.arrayPairSum(nums) << endl;

    return 0;
}
