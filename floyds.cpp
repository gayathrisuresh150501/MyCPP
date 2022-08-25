#include<iostream>
using namespace std;

int main()
{
    int height, count = 1;
    cin >> height;
    for(int i = 1; i <= height; i++, cout << endl)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << count++ << " ";
        }
    }
    return 0;
}