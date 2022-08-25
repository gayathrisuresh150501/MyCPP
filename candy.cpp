#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    int n, sum = 0, finalSum = 0;
    vector<int> sumArr;
    cin >> n;
     
    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sum = arr[0];
    for(int i = 1; i < n; i++)
    {
        sum +=  arr[i];
        sumArr.push_back(sum);
    }

    for(int l : sumArr)
    {
        finalSum += l;
    }

    cout << finalSum;
    return 0;
}