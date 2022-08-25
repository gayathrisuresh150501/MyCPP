#include<iostream>
using namespace std;

int main()
{
    int height;
    cin >> height;
    for(int i = 1; i <= height; i++, cout << endl)
    {
        for(int j = 1; j <= height - i; j++)
        {
            cout << " ";
        }

        for(int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
    }

    for(int i = height; i >= 1; i--, cout << endl)
    {
        for(int j = 1; j <= height - i; j++)
        {
            cout << " ";
        }

        for(int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
    }

    return 0;
}