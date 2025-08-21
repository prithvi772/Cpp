#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int secondLargestElement(vector<int> &v)
{

    int max = INT16_MIN;
    int secondLargest = INT16_MIN;
    for (int i = 0; i < v.size(); i++)
    {
        if (max < v[i])
        {
            secondLargest = max;
            max = v[i];
        }
        else if (max > v[i] && v[i] > secondLargest)
        {
            secondLargest = v[i];
        }
    }
    if (secondLargest == INT16_MIN)
    {
        return -1;
    }
    return secondLargest;
}
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};

    cout << "Second Largest element is:" << secondLargestElement(v);
}

// No problem 🙂 let’s slow down and do this step by step with a real trace table so you can see why that else if is needed.

// We are solving: find the second largest element.

// We keep:

// largest → biggest number so far

// second → second biggest so far

// Example: arr = [7, 3, 9, 5]

// Initial:

// largest = -∞
// second = -∞

// 🔹 Step 1: x = 7

// 7 > largest (-∞) ✅
// So update:

// second = largest (-∞)
// largest = 7

// Now: largest = 7, second = -∞

// 🔹 Step 2: x = 3

// 3 > largest (7)? ❌ no

// else if (3 < 7 && 3 > -∞)? ✅ yes → update second = 3

// largest = 7
// second = 3

// 🔹 Step 3: x = 9

// 9 > largest (7)? ✅ yes
// So update:

// second = largest (7)
// largest = 9

// Now: largest = 9, second = 7

// 🔹 Step 4: x = 5

// 5 > largest (9)? ❌ no

// else if (5 < 9 && 5 > 7)? ❌ no (5 is not bigger than 7)
// So nothing changes.

// largest = 9
// second = 7

// ✅ Final Answer → second largest = 7

// 👉 Did you notice Step 2?
// When we saw 3, it was not the largest, but it was still bigger than current second (-∞), so we needed to update second.

// That’s exactly why we use:

// else if (x < largest && x > second)
//     second = x;