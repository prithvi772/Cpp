#include <iostream>
using namespace std;

int main() {
    int n = 6;

    if (n <= 0) {
        cout << "Not Ugly";
        return 0;
    }

    for (int i = 2; i <= n; i++) {
        if (n % i == 0) {
            if (i != 2 && i != 3 && i != 5) {
                cout << "Not Ugly";
                return 0;
            }

            // remove all occurrences of valid factor
            while (n % i == 0) {
                n /= i;
            }
        }
    }

    if (n == 1)
        cout << "Ugly";
    else
        cout << "Not Ugly";

    return 0;

    // bool isUgly(int n) {
    //     if (n <= 0) return false;

    //     while (n % 2 == 0) n /= 2;
    //     while (n % 3 == 0) n /= 3;
    //     while (n % 5 == 0) n /= 5;

    //     return n == 1;
    // }
}
