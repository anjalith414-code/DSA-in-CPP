#include <iostream>
using namespace std;
int main()
{
    char x;
    cout << "enter x" << endl;
    cin >> x;
    if (x >= 97 && x <= 123)
    {
        cout << ("lowercase\n");
    }
    else
    {
        cout << ("uppercase\n");
    }
    return 0;
}
