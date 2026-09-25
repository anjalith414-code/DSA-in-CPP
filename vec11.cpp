// print the vector elements in reverse order
#include<iostream>
#include<vector>//vector use karne k lie
using namespace std;
int main()
{
    // ekk interger vector bnaya aur 3 values store ki
    vector<int> v ={10,20,30};
    //using for loop
    for(int i =v.size()-1;i>=0;i--){
        cout<<v[i]<<" ";
    }

    return 0;

}
