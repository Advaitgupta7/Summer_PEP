#include<iostream>
using namespace std;
int main()
{
    int a=10;
    // 4 Bytes
    long long int f=10000000000;
    // 8 Bytes
    float b=3.14;
    // 4 Bytes
    double g=3.14159265358979323846;
    // 8 Bytes
    char c='A';
    // 1 Byte
    bool d=true;
    // 1 Byte
    string s="Hello World";
    // 1 Byte
    int e;
    // Uninitialized variable
    cout<<"Integer: "<<a<<endl;
    cout<<"Float: "<<b<<endl;
    cout<<"Character: "<<c<<endl;
    cout<<"Boolean: "<<d<<endl;
    cout<<"String: "<<s<<endl;
    cout<<"Double: "<<g<<endl;
    cout<<"Long Long Integer: "<<f<<endl;

    cout << "Uninitialized integer: " << e << endl;

    return 0;


}