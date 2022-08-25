#include<iostream>
using namespace std;
int fact(int n)
{
    int factorial = 1;
    for(int i = 2; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}

int main()
{
    int height;
    cin >> height;
    for(int i = 0; i <= height; i++, cout << endl)
    {
        for(int j = 0; j <= i; j++)
        {
            cout << fact(i)/(fact(j) * fact(i - j)) << " ";
        }
    }
    return 0;
}