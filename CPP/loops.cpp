#include <iostream>
using namespace std;
int main(){
    int i =0;
    for(int i=0;i<=10;i++){
        cout << "hello world " << i<<  endl;
    }
    while(i<=10){
        cout << "hello world " << i<<  endl;
        i++;
    }
    do{
        cout << "hello world " << i<<  endl;
        i++;
    }while(i<=10);
}