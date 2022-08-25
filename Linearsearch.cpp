#include<iostream>
using namespace std;

int LinearSearch(int arr[], int sizeArr, int key)
{
    for(int i = 0; i < sizeArr;  i++)
    {
        if(arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arrSize;
    cin >> arrSize;

    int numArr[arrSize];
    for(int i = 0; i < arrSize; i++)
    {
        cin >> numArr[i];
    }

    int key;
    cin >> key;

    cout << LinearSearch(numArr, arrSize, key);
    
    return 0;
}