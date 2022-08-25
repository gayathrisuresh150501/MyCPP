#include<iostream>
int primeArr[100];
using namespace std;

int isPrime(int N)
{
    int flag = 1;
    for(int i = 2; i <= N/2; i++)
    {
        if(N % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if(flag == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int findSum(int N)
{
    int i, sum = 0;
    for(i = 0; i < N; i++)
    {
        sum += primeArr[i];
    
        if(sum == N)
        {
            return 1;
        }
        return 0;   
    }
}

int main()
{
    int N, k = 0, count = 0;
    cin >> N;
    for(int j = 2; j <= N; j++)
    {
         if(isPrime(j))
        {
            primeArr[k] = j;
            cout << primeArr[k] << " ";
            k++;
        }
    }
   cout << endl;
   int sum = 0;
   //cout << k;
   for(int i = 2; i < k; i++)
   {
       if(findSum(primeArr[i]) && isPrime(primeArr[i]))
       {
           count++;
       }
       
   }
   cout << count;
    return 0;
}