#include <iostream>
using namespace std;

int lengthOfLastWord(string s)
{
    int i = s.length() - 1;
    int count=0;
    while (i >= 0 && s[i] == ' ')
    {
        i--;
    }
    while (i >= 0 && s[i] != ' ')
    {
        count++;
        i--;
    }
    return count;
}

int main()
{
    string s;
    cout << "Enter String:";
    getline(cin, s);
    cout << lengthOfLastWord(s);
}