#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxCount = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                count++;
            } else {
                count = 0;
            }

            if (count > maxCount) {
                maxCount = count;
            }
        }

        return maxCount;
    }
};

int main() {
    Solution obj;

    // Test case
    vector<int> nums = {1, 1, 0, 1, 1, 1};

    int result = obj.findMaxConsecutiveOnes(nums);

    cout << "Maximum Consecutive Ones: " << result << endl;

    return 0;
}
