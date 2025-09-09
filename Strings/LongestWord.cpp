#include <iostream>
using namespace std;

string longestWord(string s)
{
    string maxWord = "";
    string result = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            if (maxWord.length() < result.length())
            {
                maxWord = result;
                result = "";
            }
        }
        else
        {
            result += s[i];
        }
    }
    return maxWord;
}
int main()
{
    string s1;
    cout << "Enter String:";
    getline(cin, s1);
    cout << "Longest word is:" << longestWord(s1);
}