#include<iostream>
using namespace std;

int main()
{
    int height;
    cin >> height;
    //upper half
    for(int i = 1; i <= height; i++, cout << endl)
    {
        for(int j = 1; j <= i; j++)
        {
            cout <<"*";
        }
        int space = 2 * height - 2 * i;
        for(int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for(int j = 1; j <= i; j++)
        {
            cout <<"*";
        }
    }

    //lower half
    for(int i = height; i >= 1; i--, cout << endl)
    {
        for(int j = 1; j <= i; j++)
        {
            cout <<"*";
        }
        int space = 2 * height - 2 * i;
        for(int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for(int j = 1; j <= i; j++)
        {
            cout <<"*";
        }
    }

    return 0;
}