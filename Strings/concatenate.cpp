#include<iostream>
using namespace std;
void concatenate(string s1,string s2){
    s1+=s2;
    cout<<s1;
}
// void concatenate(string str1,string str2)
// {
//   for (int i = 0; str2[i] != '\0'; i++)
//         str1.push_back(str2[i]);

//     cout << "Concatenated String: " << str1 << endl;
// }
int main(){
    string s1,s2;
    cout<<"Enter s1:";
    getline(cin,s1);
    cout<<"Enter s2:";
    getline(cin,s2);
    concatenate(s1,s2);
}