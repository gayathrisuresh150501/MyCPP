#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(5);
    arr.push_back(7);

    vector<int> sum;
    sum.push_back(2);
    for(int i = 0; i < arr.size(); i++)
    {
        sum[i] += arr[i];
        cout << sum[i] << " ";
    }
    for(int l : sum)
    {
        cout << l << " "; 
    }
    return 0;
}