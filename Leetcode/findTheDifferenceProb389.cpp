#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans = 0;

        for (char c : s)
            ans ^= c;

        for (char c : t)
            ans ^= c;

        return ans;
    }
};

int main() {
    Solution obj;

    // Example input
    string s = "abcd";
    string t = "abcde";

    char result = obj.findTheDifference(s, t);

    cout << "The extra character is: " << result << endl;

    return 0;
}
