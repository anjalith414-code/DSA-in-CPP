# include <iostream>
using namespace std; 
int main(){
    int n = 7, sum = 0;
    for( int i = 1;i<=n;i++){
        sum += i;
        cout<<sum<<" ";
    
        if(i==4){
            break;
        }
    }
        
    
    return 0;
}