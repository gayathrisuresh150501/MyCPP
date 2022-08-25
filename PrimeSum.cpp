#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

//to find and store prime no. in vector
vector<int> primeList(int N)
{
    int j;
    vector<int> primeVal;
    for(int i = 2; i <= N; i++)
    {
        for(j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                break;
            }
        } 
        if(i == j)
        {
            primeVal.push_back(i);
        }
    }
    return primeVal;
}

//to find sum of prime no. and find the count of Primesums
vector<int> primesumArr(vector<int> primenumArr)
{
    vector<int> sum;
    int isum = 2;
    for(int i = 1; i < primenumArr.size(); i++)
    {
        isum = isum + primenumArr[i];
        sum.push_back(isum);
    }
  
   return sum;
}

//to check count of sum array elements in prime array
int checkCount(vector<int> primenumArr, vector<int> sumP)
{
     int count = 0;
    for(int i = 0; i < sumP.size(); i++)
    {
        for(int j = 0; j < primenumArr.size(); j++)
        {
            if(sumP[i] == primenumArr[j])
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    int N, count = 0;
    cin >> N;
    vector<int> primenumArr = primeList(N);
    vector<int> sumP = primesumArr(primenumArr);
    cout << checkCount(primenumArr, sumP);
   /*
    for(int l: sumP)
    {
        cout << l << " ";
    }
    */
    return 0;
}