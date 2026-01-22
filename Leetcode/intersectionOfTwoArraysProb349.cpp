#include <iostream>
#include<unordered_set>
#include <vector>
using namespace std;

vector<int> intersection(vector<int> &nums1, vector<int> &nums2){

    unordered_set<int> a;
    unordered_set<int> b;
    vector<int> result;
    for(int i=0;i<nums1.size();i++){
        if(a.find(nums1[i])==a.end()){
            a.insert(nums1[i]);
        }
    }
    for(int i=0;i<nums2.size();i++){
        if(b.find(nums2[i])==b.end()){
            b.insert(nums2[i]);
        }
    }
    for (int elementOfA : a){
        if(b.find(elementOfA)!=b.end()){
            result.push_back(elementOfA);
        }
    }
    return result;

}

int main()
{
    vector<int> nums1 = {1, 1, 2, 2};
    vector<int> nums2 = {2, 2, 3, 3};
    vector<int> ans=intersection(nums1, nums2);
    for(int x :ans){
        cout<<x<<" ";
    }
}
