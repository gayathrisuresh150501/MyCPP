#include<iostream>
using namespace std;

//to find and store prime no. in vector
int* primeList(int N)
{
    int j;
    int* primeVal;
    for(int i = 2; i <= N; i++)
    {
        for(j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                break;
            }
        } 
        if(j == i)
        {
            primeVal[i - 2] = i;
        }
    }
    return primeVal;
}

int main()
{
    int N;
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        cout << primeList(N) << " ";
    }

    return 0;
}