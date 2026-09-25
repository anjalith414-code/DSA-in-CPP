# include<iostream>
using namespace std;
int main(){
    int n=23;
   int oddSum=0;
   int i=1;
   while(i<=n){
   oddSum+=i;
   cout<<oddSum<<endl;
   i+=2;
   }
   return 0;
}