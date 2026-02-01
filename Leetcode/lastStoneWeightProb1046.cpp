#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {

        while (stones.size() > 1) {

            // sort stones
            sort(stones.begin(), stones.end());

            int n = stones.size();
            int y = stones[n - 1];  // largest
            int x = stones[n - 2];  // second largest

            // reduce vector size by removing last two stones
            stones.resize(n - 2);

            // smash result
            if (y != x) {
                stones.push_back(y - x);
            }
        }

        return stones.empty() ? 0 : stones[0];
    }
};
// class Solution {
// public:
//     int lastStoneWeight(vector<int>& stones) {

//         while (stones.size() > 1) {

//             // sort stones
//             sort(stones.begin(), stones.end());

//             int y = stones.back();        // largest
//             stones.pop_back();

//             int x = stones.back();        // second largest
//             stones.pop_back();

//             // smash
//             if (y != x) {
//                 stones.push_back(y - x);
//             }
//         }

//         // if no stones left, return 0
//         return stones.empty() ? 0 : stones[0];
//     }
// };

int main()
{
    Solution obj;

    // Example input
    // vector<int> stones = {2, 7, 4, 1, 8, 1};
    // vector<int> stones = {3,1};
    vector<int> stones = {3,7,8};

    int result = obj.lastStoneWeight(stones);

    cout << "Result: " << result << endl;

    return 0;
}
