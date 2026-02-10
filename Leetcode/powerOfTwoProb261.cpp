#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) return false;
        return (n & (n - 1)) == 0;
    }
};

int main() {
    Solution obj;

    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (obj.isPowerOfTwo(n)) {
        cout << n << " is a power of two" << endl;
    } else {
        cout << n << " is NOT a power of two" << endl;
    }

    return 0;
}
