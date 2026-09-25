//to print only first and last element
#include<iostream>
#include<vector>//vector use karne k lie
using namespace std;
int main()
{
    // ekk interger vector bnaya aur 3 values store ki
    vector<int> v ={5,10,15,20,25};
    // print first element of vector
    cout << v.front()<<" ";
    // print last element of vector
    cout<<v.back();

    return 0;

}
