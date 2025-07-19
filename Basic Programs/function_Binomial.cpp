#include <iostream>
using namespace std;

int display(int n, int r)
{
    int nFact = 1;
    int rFact = 1;
    int nrFact = 1;
    int result;
    if(r > n){
        cout << "Invalid input: r cannot be greater than n!" << endl;
        return 0;
    }

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
    cout<<"The factorial of n is:"<<nFact<<endl;
    cout<<"The factorial of r is:"<<rFact<<endl;
    cout<<"The factorial of nCr is:"<<nrFact<<endl;
    return result;
}

int main()
{
    int a, b;
    cout<<"Enter value of n:";
    cin>>a;
    cout<<"Enter value of r:";
    cin>>b;
    cout<<"The Binomial Factorial is:"<<display(a,b)<<endl;

    
}