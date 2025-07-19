#include <iostream>
using namespace std;
int main()
{
    int n, r;
    int nrFact = 1;
    int nFact = 1;
    int rFact = 1;
    int result = 0;
    cout << "Enter n:";
    cin >> n;
    cout << "Enter r:";
    cin >> r;
    for (int i = 1; i <= n; i++)
    {
        nFact *= i;
    }
    for (int i = 1; i <= r; i++)
    {
        rFact *= i;
    }
    for (int i = 1; i <= (n - r); i++)
    {
        nrFact *= i;
    }
    result = nFact / (rFact * nrFact);
    cout << "Factorial of n:" << nFact << endl;
    cout << "Factorial of r:" << rFact << endl;
    cout << "Factorial of nCr:" << nrFact << endl;
    cout << "Therefore nCr of n:" << n << " and :r" << r << " is :" << result;
}