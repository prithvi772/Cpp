#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int totalPoison = 0;

        for (int i = 0; i < timeSeries.size() - 1; i++) {
            int gap = timeSeries[i + 1] - timeSeries[i];
            totalPoison += min(gap, duration);
        }

        // Add duration for the last attack
        totalPoison += duration;

        return totalPoison;
    }
};

int main() {
    Solution obj;

    // Test case
    vector<int> timeSeries = {1, 2, 5};
    int duration = 3;

    int result = obj.findPoisonedDuration(timeSeries, duration);

    cout << "Total Poisoned Duration: " << result << endl;

    return 0;
}
