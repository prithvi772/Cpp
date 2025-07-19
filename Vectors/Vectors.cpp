#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v={1,2,3,4,5};
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }

    vector <string> v1={"Prithvi","Gadekar"};
    vector <string>v2(v1);
    for(string ch:v2){
        cout<<ch<<" ";
    }

}