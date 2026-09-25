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
    //using v.size() to know about the size of vector
    cout<<"size of vector is="<<v.size();

    return 0;

}
