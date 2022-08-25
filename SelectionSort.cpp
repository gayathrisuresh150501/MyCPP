#include<iostream>
using namespace std;

int main()
{
    int arrSize;
    cin >> arrSize;

    int numArr[arrSize];
    for(int i = 0; i < arrSize; i++)
    {
        cin >> numArr[i];
    }

    for(int i = 0; i < arrSize - 1; i++)
    {
        for(int j = i + 1; j < arrSize; j++)
        {
            if(numArr[i] > numArr[j])
            {
                int temp = numArr[i];
                numArr[i] = numArr[j];
                numArr[j] = temp;
            }
        }
    }

    for(int i = 0; i < arrSize; i++)
    {
        cout << numArr[i] << " ";
    }
    
    return 0;
}