#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v1(5);
    vector<int> v2(5,0);
    vector<int> v3={1,2,3,4,5};
    vector<string> names={"Prithvi","Gadekar"};

    // cout<<"\n------------------"<<endl;
    cout<<names[0]<<endl;
    cout<<v3[3]<<endl;
    cout<<"Size of vector v3 before adding element in the last is:"<<v3.size()<<endl;

    // cout<<"\n------------------"<<endl;

    v3.push_back(6);
    cout<<"Size of vector v3 after adding element in the last is:"<<v3.size()<<endl;

    for ( int prithvi : v3){
        cout<<prithvi<<" ";
    }

}