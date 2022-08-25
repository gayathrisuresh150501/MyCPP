#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, k, count = 0;
    cin >> N >> k;

    for (int i = N; i >= 1; i--)
    {
        if (N % i == 0)
        {
            count++;
        }

        if (k == count)
        {
            cout << i;
            
        }
    }
    return 0;
}