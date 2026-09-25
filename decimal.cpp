#include <iostream>
using namespace std;
int square(int x)
{
    for (int i = 1; i <= x; i++)
    {
        cout << "square of number "<< i <<" is equals to ="<<i*i<<endl;

}
    
}
int main(){
    int a;
    cout<<"enter a;"<<" ";
cin>>a;

   square(a);
    return 0;
}
