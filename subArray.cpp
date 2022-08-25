#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int currentVal = 0;
    for(int i = 0; i < n; i++)
    {
        currentVal = 0;
        for(int j = i; j < n; j++)
        {
            currentVal += arr[j];
            cout << currentVal << " ";
        }
        // cout << currentVal << " ";
    }
    return 0;
}