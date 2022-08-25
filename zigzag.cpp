#include<iostream>
using namespace std;

int main()
{
    int col;
    cin >> col;
    for(int i = 1; i <= 3; i++, cout << endl)
    {
        for(int j = 1; j <= col; j++)
        {
            if(((i + j) % 4 == 0) || (i == 2 && j % 4 == 0))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
    }
    return 0;
}