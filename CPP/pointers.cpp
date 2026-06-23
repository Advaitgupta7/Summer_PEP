#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *ptr = &a;

    cout << &a << endl;      // Address of a
    cout << ptr << endl;     // Same address
    cout << &ptr << endl;    // Address of pointer variable ptr
    cout << ptr + 1 << endl; // Next int address
    cout << *(ptr+1) << endl;
    cout << (*ptr)+1 <<endl;
    return 0;
}