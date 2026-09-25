# include<iostream>
using namespace std;
int factn(int n)
{
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact*=i;
        
    }
    return fact;

}

int main()
{
    cout<<factn(7)<<endl;
    cout<<factn(9)<<endl;
    return 0;
}
