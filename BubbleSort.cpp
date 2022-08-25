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
    int counter = 1;
    while(counter < arrSize)
    {
        for(int j = 0; j < arrSize; j++)
        {
            if(numArr[j] > numArr[j + 1])
            {
                int temp = numArr[j];
                numArr[j] = numArr[j + 1];
                numArr[j + 1] = temp;
            }
        }
        counter++;
    }
    for(int i = 0; i < arrSize; i++)
    {
        cout << numArr[i] << " ";
    }
    
    return 0;
}