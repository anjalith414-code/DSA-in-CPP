#include<iostream>
using namespace std;
int sumodd(int r){
    int sum =0;
    for(int i=5;i<=r;i=i+2){
        sum+=i;
    }
    return sum;
}
    int main(){
        int a;
        cout<<"enter the value of a="<<" "<<endl;
        cin>>a;
        cout<<sumodd(a)<<" "<<endl;
        return 0;
    }
