#include <iostream>
#include <vector>
using namespace std;

void reverseVector(vector<int> &v){

    int high=v.size()-1;
    int low=0;
    int temp=0;

    while(high>low){
        temp=v[low];
        v[low]=v[high];
        v[high]=temp;
        low++;
        high--;
    }
}
int main()
{
    vector<int> v = {1, 2, 3, 4, 5,6,7};
    reverseVector(v);
    for (int prithvi :v){
        cout<<prithvi<<" ";
    }
}