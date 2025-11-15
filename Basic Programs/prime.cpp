#include <iostream>
using namespace std;

bool prime(int n)
{
    if(n<=1){
        cout<<"Not Prime.";
        return;
    }
    for (int i = 2; i <n; i++)
    {
        if (n % i == 0)
        {
           return false;
        } 
    }
    return true;
}
int main()
{
    int n;
    cout << "Enter number:";
    cin >> n;
    bool ok= prime(n);
    if(ok){
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }
   
}
