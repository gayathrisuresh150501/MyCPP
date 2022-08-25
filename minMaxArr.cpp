#include<iostream>
#include<climits>
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

    int maxVal = INT_MIN, minVal = INT_MAX;

    for(int i = 0; i < arrSize; i++)
    {
        maxVal = max(numArr[i], maxVal);
        minVal = min(numArr[i], minVal);
    }

    cout << "Max element: " << maxVal << "\nMin element: " << minVal;
    return 0;
}