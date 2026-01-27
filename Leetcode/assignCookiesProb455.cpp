#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());   // sort greed factors
        sort(s.begin(), s.end());   // sort cookie sizes

        int i = 0;  // child pointer
        int j = 0;  // cookie pointer
        int count = 0;

        while (i < g.size() && j < s.size()) {
            if (s[j] >= g[i]) {
                count++;   // child is content
                i++;
                j++;
            } else {
                j++;       // cookie too small, skip it
            }
        }
        return count;
    }
};

int main() {
    Solution obj;

    // Example inputs (you can change these)
    vector<int> g = {1, 2, 3};
    vector<int> s = {1, 1};

    int result = obj.findContentChildren(g, s);

    cout << "Maximum content children: " << result << endl;

    return 0;
}
