#include<iostream> 
using namespace std;
int main()
{
    int n = 20;
    int evenSum = 0;
    int i=2;
    while (i<=n){
    
        evenSum += i;
        cout << evenSum << endl;
        i+=2;
    }
    return 0;
}