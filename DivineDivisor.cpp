#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<int> factors;
    for(int i = 1; i <= N/2; i++)
    {
        if(N%i == 0)
        {
            factors.push_back(i);
        }
    }
    
    factors.push_back(N);
    for(int l:factors)
    {
        cout << l << " ";
    }
    return 0;
}