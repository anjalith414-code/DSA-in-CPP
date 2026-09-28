// take 5 integers in vector as input and print their sum
#include<iostream>

#include<vector>//vector use karne k lie
using namespace std;
int main()
{
    // ekk interger vector bnaya aur 3 values store ki
    vector<int> v ={10,20,30,40,50};
    int sum =0;
    for(int i=0;i<v.size();i++){
        sum= sum+v[i];
    }
    cout<<"sum ="<<sum<<" ";
    return 0;

}
