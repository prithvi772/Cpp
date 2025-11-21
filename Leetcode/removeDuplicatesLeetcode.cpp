#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;
        int x = 0;
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] != nums[x]) {
                x++;
                nums[x] = nums[i];
            }
        }
        return x + 1; 
    }
};

int main() {
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};

    Solution obj;
    int k = obj.removeDuplicates(nums);

    cout << "Unique count: " << k << endl;
    cout << "Array after removing duplicates: ";
    for(int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    return 0;
}
