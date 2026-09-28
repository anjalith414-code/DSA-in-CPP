//different syntax to store elements in a vector
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec(7,23);//used in dynamic programming
    for(int val:vec){
    cout<<val<<" ";
    }
    return 0;
}