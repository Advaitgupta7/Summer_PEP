#include <iostream>
using namespace std;
int main(){
    int a = 5;
    for(int i=1; i<=a; i++){
        for(int j=1; j<=a; j++){
            if(i==1 || i==5 || j==1 || j==5)
                cout<<" * ";
            else
                cout<<"   ";
        }
        cout<<endl;
    }
    return 0;
}