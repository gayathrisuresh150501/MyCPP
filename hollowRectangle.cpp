#include<iostream>
using namespace std;

int main()
{
    int row, col;
    cin >> row >> col;
    for(int i = 1; i <= row; i++,cout << endl)
    {
        for(int j = 1; j <= col; j++)
        {
            if( i == 1 || j == 1 || i == row || j == col)
            {
                cout <<"*";
            }
            else
            {
                cout << " ";
            }  
        }
    }
    return 0;
}