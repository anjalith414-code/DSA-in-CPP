# include <iostream>
using namespace std;
int suma(int a,int b){
    a = a+10;//17
    
    b = b+20;//43
    return a+b;//60
}
int main(){
    int a = 7;
    int r = 23;
    cout<<suma(a,r)<<" ";
    return 0;
}
