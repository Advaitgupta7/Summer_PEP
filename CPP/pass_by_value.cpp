#include <iostream>
using namespace std;

void changeValue(int x) {
    x = 100;
    cout << "Inside function: " << x << endl;
}

int main() {
    int num = 10;

    changeValue(num);

    cout << "In main: " << num << endl;

    return 0;
}