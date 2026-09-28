//take a input from user as n and store n numbers in vector and then print vector elements
#include<iostream>
#include<vector>//vector use karne k lie
using namespace std;
int main()
{
    int n;
    cout<<"n=";
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);


    }
    cout<<"vector elements="<<" ";
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
     
    return 0;

}
