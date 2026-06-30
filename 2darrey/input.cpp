#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    int arr[a][b];
    //user input row wise
    // for(int i=0;i<a;i++)
    // {
    //     for(int j=0;j<b;j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }
    //for column wise input
    for(int i=0;i<b;i++)
    {
        for(int j=0;j<a;j++)
        {
            cin >> arr[j][i];
        }
    }
    for (int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}