
#include<iostream>
#include<vector>//vector use karne k lie
using namespace std;
int main()
{
    // ekk interger vector bnaya aur 3 values store ki
    vector<int> v ={10,20,30};
    // using pop function to deletelast elemen    
    v.pop_back();
    cout<<v[0]<<" ";
    cout<<v[1];

    return 0;

}
