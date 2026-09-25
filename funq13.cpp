# include<iostream>
using namespace std;
int sumofeven(int n){
    int sum =0;
    for(int i=2;i<=n;i=i+2){
        
        
        
        
        if(i%2==0){
            
            sum+=i;
            
        }
         }
        return sum;
    }
        int main(){
            
            cout<<sumofeven(12)<<" "<<endl;
            return 0;
        }
        
        