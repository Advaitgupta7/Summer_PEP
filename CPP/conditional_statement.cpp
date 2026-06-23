#include <iostream>
using namespace std;
int main()
{
    int marks, leave;
    cin >> marks >> leave;
    if(marks >= 50 && leave < 10)
    {
        cout << "Pass" << endl;
    }
    else
    {
        cout << "Fail" << endl;
    }
}