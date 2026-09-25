# include<iostream>
using namespace std;
int sumr(int a, int b){
    int sum=a+b;
    return sum;
}
int main(){
    int a;
    int b;
    cout<<"enter the value of a:"<<endl;
    cin>>a;
    cout<<"enter the value of b:"<<endl;
    cin>>b;
    cout<<sumr(a,b);
    return 0;
}