#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    int val;
    cout<<"How many numbers do u want to enter in the vector:";
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        cout<<"Enter number:"<<i+1<<" ";
        cin>>val;
        v.push_back(val);
    }
    // cout<<"Vector Size:"<<v<<endl;
    cout<<"After Adding elements:"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    cout<<"After add vector size:"<<v.size()<<endl;
    
    for(int i=0;i<n;i++){
        v.pop_back();
    }
    cout<<"After pop vector size:"<<v.size()<<endl;
    cout<<"After removing elements:"<<endl;
     for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}