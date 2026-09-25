#include<iostream>
using namespace std;
int minoftwo(int a, int b){
    if (a<b){
        return a;
    }
    else{
        return b;
    }
}
    int main(){
        cout<<minoftwo(7,8)<<" ";
        return 0;
    }

