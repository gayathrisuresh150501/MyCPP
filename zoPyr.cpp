#include<iostream>
using namespace std;
/*
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/
int main()
{
    int height;
    cin >> height;
    for(int i = 1; i <= height; i++, cout << endl)
    {
        for(int j = 1; j <= i; j++)
        {
            if(j == i || (i % 2 != 0 && j % 2 != 0) || (i % 2 == 0 && j % 2 == 0))
            {
                cout << " 1 ";
            }
            else
            {
                cout << " 0 ";
            }
        }
    }
    return 0;
}