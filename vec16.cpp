#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={1,2,3,4,5};
    //erase function
    vec.erase(vec.begin());
    for(int val:vec){
        cout<<val<<" ";
    }
    return 0;
}