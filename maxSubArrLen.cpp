#include<bits/stdc++.h>
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

    int currLen = 2, maxLen = 2, iter = 2;
    int prevDiff = arr[1] - arr[0];

    while(iter < n)
    {
        if(prevDiff == arr[iter] - arr[iter - 1])
        {
            currLen++;
        }
        else
        {
            prevDiff = arr[iter] - arr[iter - 1];
            currLen = 2;
        }
        maxLen = max(maxLen, currLen);
        iter++;
    }

    cout << maxLen;
    return 0;
}