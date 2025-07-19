//Write a C++ program that takes a positive integer from 
//the user and counts how many digits it has using a loop.
#include <iostream>
    using namespace std;
int main()
{
    int num;
    cout << "Enter number:";
    cin >> num;
    int rem = 0;
    int count = 0;
    while (num != 0)
    {
        rem = num % 10;
        count = count + 1;
        num = num / 10;
    }
    cout << "No.of digits:" << count;
}