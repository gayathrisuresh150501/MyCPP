#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int, 5> myArray = {1,2,3,4,5};
    for(int i = 0; i < myArray.size(); i++)
    {
        cout << myArray[i] << " ";
    }
    return 0;
}