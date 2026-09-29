#include<iostream>
#include<vector>
#include<list>
using namespace std;
int main(){
    list<int>l;
    l.push_back(1);
    l.push_back(3);
    l.push_front(2);
    l.pop_back();
    for(int val:l){
        cout<<val<<" ";

    }
    return 0;}
