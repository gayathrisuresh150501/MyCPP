#include<iostream>
using namespace std;

int main()
{
    int height;
    cin >> height;
    for(int i = 1; i <= height; i++,cout << endl)
    {
        for(int j = height; j >= i; j--)
        {
            cout << "*"; 
        }
    }
    return 0;
}