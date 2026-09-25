#include<iostream>
using namespace std;
int num(int n){
    for(int i=1;i<=n;i++){
        if(i%7==0){
            cout<<i<<endl;
        }
    }
}
int main(){
    int a;
    cout<<"enter a:"<<" ";
    cin>>a;
    num(a);
    return 0;
}