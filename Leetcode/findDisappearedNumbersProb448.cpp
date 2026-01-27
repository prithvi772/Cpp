#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        vector<int> v;
        for(int i=1;i<=nums.size();i++){
            if(s.find(i)==s.end())  v.push_back(i);
        }
        
      return v;
    }
};


int main() {
    Solution obj;

    vector<int> nums = {1, 1};   // you can change input here

    vector<int> result = obj.findDisappearedNumbers(nums);

    cout << "Missing numbers: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}




// Time Complexity: O(square)(n)    
// class Solution {
// public:
//     vector<int> findDisappearedNumbers(vector<int>& nums) {
//         vector<int> v;
//         int num = 1;

//         for (int i = 0; i < nums.size(); i++) {
//             if (find(nums.begin(), nums.end(), num) == nums.end()) {
//                 v.push_back(num);
//             }
//             num++;
//         }
//         return v;
//     }
// };
