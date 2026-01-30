#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int distributeCandies(vector<int> &candyType)
    {
        unordered_set<int> unique;
        vector<int> v;

        for (int i = 0; i < candyType.size(); i++)
        {

            unique.insert(candyType[i]);
        }

        int maxCandies = candyType.size() / 2;
        int uniqueTypes = unique.size();
        return min(maxCandies, uniqueTypes);
    }
};

int main()
{
    Solution obj;

    // Example input
    vector<int> candyType = {1, 1, 2, 2, 3, 3};

    int result = obj.distributeCandies(candyType);

    cout << "Result: " << result << endl;

    return 0;
}
