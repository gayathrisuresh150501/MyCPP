#include<bits/stdc++.h>
using namespace std;

void numberOfCoins(int range)
{
    int fives, ones, twos;

    fives = (range - 4)/5;

    if((range - 5) * fives % 2 == 0)
    {
        ones = 2;
    }

    else
    {
        ones = 1;
    }

    twos = ((range - 5) * fives - ones)/2;

    int total = ones + twos + fives;

    cout << total << " " << fives << " " << twos << " " << ones;

}

int main()
{
    int upperLimit;
    cin >> upperLimit;

    numberOfCoins(upperLimit);

    return 0;
}