#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={10,20,30,40,50};
    vec.pop_back();
    for(int val:vec)
    cout<<val<<endl;
    cout<<vec.capacity();
    return 0;
}