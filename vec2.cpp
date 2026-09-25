#include<iostream>
#include<vector>//vector use karne k lie
using namespace std;
int main()
{
    // ekk interger vector bnaya aur 3 values store ki
    vector<int> v ={10,20,30};
    // print first element of vector
    cout << v[0]<<endl;
    // print second element of vector
    cout<<v[1]<<endl;
    // print third element of vector
    cout<<v[2]<<endl;
    // add 4 element using push_back() fuction
    v.push_back(40);
    //print fourth element of vector
    cout<<v[3];

    return 0;

}
