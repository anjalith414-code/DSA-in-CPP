#include<iostream>
#include<vector>
#include<deque>
using namespace std;
int main(){
    deque<int>d;
    d.push_back(1);
    d.push_back(3);
    d.push_front(2);
    d.pop_back();
    for(int val:d){
        cout<<val<<" ";

    }
    return 0;}
