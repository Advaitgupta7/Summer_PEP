#include <iostream>
using namespace std;

int display(int x){
    cout << "This is a non-void function. " << x << endl;
    return x;
}


int main(){
    display(5);
}