#include <iostream>
#include <unordered_set>
using namespace std;

void removeDup(int arr[], int n) {
    unordered_set<int> seen;

    for(int i = 0; i < n; i++) {
        if(seen.find(arr[i]) == seen.end()) {
            cout << arr[i] << " ";
            seen.insert(arr[i]);
        }
    }
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    removeDup(arr, n);
}
