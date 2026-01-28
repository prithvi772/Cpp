#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                return mid;
            }
            else if (nums[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        return -1;
    }
};

int main() {
    Solution obj;

    // Example input (sorted array)
    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    int target = 9;

    int result = obj.search(nums, target);

    if (result != -1)
        cout << "Target found at index: " << result << endl;
    else
        cout << "Target not found" << endl;

    return 0;
}
