// lowercase to uppercase
#include <iostream>
using namespace std;

string upperCase(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }
    }
    return s;
}
int main()
{
    string s1;
    cout << "Enter string:";
    getline(cin, s1);
    string s = upperCase(s1);
    cout << s;
}