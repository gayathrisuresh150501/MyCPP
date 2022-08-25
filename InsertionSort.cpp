#include<iostream>
using namespace std;

int main()
{
    int arrSize;
    cin >> arrSize;

    int Num[arrSize];
        for(int i = 0; i < arrSize; i++)
        {
            cin >> Num[i];
        }

    for(int i = 1; i < arrSize; i++)
    {
        int val = Num[i];
        int j = i - 1;
        while(Num[j] > val && j >= 0)
        {
            Num[j + 1] = Num[j];
            j--;

        }
        Num[j + 1] = val;
    }

    for(int i = 0; i < arrSize; i++)
        {
            cout << Num[i] << " ";
        }

    return 0;
}