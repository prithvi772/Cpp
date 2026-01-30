#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {

        // If lengths differ, mapping is impossible
        if (s.length() != t.length())
            return false;

        // Map characters from s → t
        unordered_map<char, char> sToT;

        // Map characters from t → s (to ensure one-to-one mapping)
        unordered_map<char, char> tToS;

        // Traverse both strings together
        for (int i = 0; i < s.length(); i++) {
            char c1 = s[i]; // current character from s
            char c2 = t[i]; // current character from t

            // Check mapping from s to t
            if (sToT.count(c1)) {
                // If already mapped, it must match current character
                if (sToT[c1] != c2)
                    return false;
            } else {
                // Create new mapping
                sToT[c1] = c2;
            }

            // Check mapping from t to s (reverse mapping)
            if (tToS.count(c2)) {
                // If already mapped, it must match current character
                if (tToS[c2] != c1)
                    return false;
            } else {
                // Create new reverse mapping
                tToS[c2] = c1;
            }
        }

        // If no conflicts found, strings are isomorphic
        return true;
    }
};

int main() {
    Solution obj;

    // Test cases
    string s1 = "egg", t1 = "add";
    string s2 = "foo", t2 = "bar";
    string s3 = "paper", t3 = "title";

    cout << "egg & add → " << obj.isIsomorphic(s1, t1) << endl;
    cout << "foo & bar → " << obj.isIsomorphic(s2, t2) << endl;
    cout << "paper & title → " << obj.isIsomorphic(s3, t3) << endl;

    return 0;
}
