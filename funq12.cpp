# include <iostream>
using namespace std;
int sumr(int n){
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum += i;
    }
    return sum;
}
int main(){
    cout<<sumr(7)<<" "<<endl;
    return 0;
}