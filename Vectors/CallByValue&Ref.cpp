#include<iostream>
#include<vector>
using namespace std;

void changeByValue(vector<int> v){
    v[0]=100;
    for (int prithvi: v){
        cout<<prithvi<<" ";
    }
}

void changeByRef(vector<int>& v){
    v[1]=20000;
}
int main(){
    vector<int> v2={1,2,3,4,5};
    changeByValue(v2);
    changeByRef(v2);
    cout<<"\n--------------------------"<<endl;
    cout<<"Outside function:"<<endl;

    for (int prithvi: v2){
        cout<<prithvi<<" ";
    }

}