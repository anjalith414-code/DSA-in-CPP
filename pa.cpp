#include<iostream>
using namespace std;
int num(int n){
    for(int i=1;i<=n;i=i+1){
        
    if(i%7==0){
        cout<<i<<" "<<endl;
    }
}
}
int main(){
    int r;
    cout<<"enter r:"<<" ";
    num(r);
    return 0;
}
