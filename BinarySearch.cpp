#include<iostream>
using namespace std;

int BinarySearch(int arr[], int sizeArr, int key)
{
    int start = 0;
    int end = sizeArr - 1;
    for(int i = 0; i < sizeArr;  i++)
    {
        int mid;
        mid = (start + end) / 2;
        if(arr[mid] == key)
        {
            return mid;
        }
        else if(arr[mid] > key)
        {
            end--;
        }
        else
        {
            start++;
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

    cout << BinarySearch(numArr, arrSize, key);
    
    return 0;
}