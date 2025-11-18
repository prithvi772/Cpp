#include <iostream>
using namespace std;
bool isVowel(char c){
    return c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u'|| 
           c=='A'|| c=='E'|| c=='I'|| c=='O'|| c=='U';
}

string vowelReverse(string s)
{
    int i = 0;
    int j = s.length() - 1;

    // while (i < j && !isVowel(s[i])) i++;
    // while (i < j && !isVowel(s[j])) j--;

    while (i < j){
        if(!isVowel(s[i])){
            i++;
            continue;
        }
        if(!isVowel(s[j])){
            j--;
            continue;
        }
        swap(s[i],s[j]);
        i++;
        j--;
    }   
    return s;
}
int main()
{
    string s = "Icecream";
    cout<<vowelReverse(s);
}