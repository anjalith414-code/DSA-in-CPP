#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<pair<int,int>>v={{1,2},{3,4},{7,23}};
v.push_back({5,6});
for(auto p:v){
 cout<<p.first<<" "<<p.second<<endl;
}
    return 0;}
