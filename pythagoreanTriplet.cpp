#include<iostream>
using namespace std;

bool isCheck(int x, int y, int z)
{
    int a, b, c;
    a = max(x, max(y, z));
    if (a == x)
    {
        b = y;
        c = z;
    }
    else if (a == y)
    {
        b = x;
        c = z;
    }
    else
    {
        b = x;
        c = y;
    }

    if ((b*b + c*c) == a*a)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    if(isCheck(x ,y, z))
    {
        cout << "Pythagorean triplet";
    }
    else
    {
        cout << "Not Pythagorean triplet";
    }
    return 0;
}