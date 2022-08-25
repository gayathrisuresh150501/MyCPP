#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

//to find and store prime no. in vector
vector<int> primeList(int X, int Y)
{
    int j;
    vector<int> primeVal;
    for(int i = X; i <= Y; i++)
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

vector<int> happNumFunc(vector<int> primeNumArr)
{
    for(int i = 0; i < primeNumArr.size(); i++)
    {
        int temp = primeNumArr[i];
        while(temp)
        {
            
            int rem = temp % 10; 
            int sum = 0;
            sum += pow(rem,2);
            temp /= 10;
        }
    }
}

int main()
{
    int X, Y, N;
    cin >> X >> Y >> N;
    vector<int> primenumArr = primeList(X, Y);
    vector<int> happNum = happNumFunc(primenumArr);
    return 0;
}