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
        int start = i;
        for(int j = 1; j <= i; j++)
        {
            cout << start;
            start--;
        }
        for(int j = 2; j <= i; j++)
        {
            cout << j;
        }
    }
    return 0;
}