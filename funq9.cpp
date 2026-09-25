# include<iostream>
using namespace std;
int sumofdigits(int a){
    int digitsum=0;
    while(a>0){
        int lastdigit = a%10;
        a/=10;
        digitsum+=lastdigit;
    }
    return digitsum;
}
int main(){
    cout<<sumofdigits(77723)<<endl;
    return 0;
}

