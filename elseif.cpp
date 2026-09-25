# include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"enter marks"<<endl;
    cin>>marks;
    if (marks>100){
        cout<<"not define";
    }
    else if (marks>=90){
        cout<<" grade A";
    }
    
    else if(marks>=80 && marks<90){
    cout<<" grade B";
    }
    else {
    cout<<" grade C";
    }
    return 0;
}


