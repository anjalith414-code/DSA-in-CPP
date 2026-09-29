// vector iterators
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec{1,2,3,4,5};
    cout<<"vec.end ="<<*(vec.end())<<" ";
    return 0;
}