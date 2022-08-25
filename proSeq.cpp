#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int N, val, countB = 0, countC = 0;
    cin >> N;
    vector<int> A;
    vector<int> B;
    vector<int> C;

    for(int i = 0; i < N; i++)
    {
        cin >> val;
        A.push_back(val);
    }

    val = A[0];
    B.push_back(val);

    for(int i = 1; i < N; i++)
    {
        val =  A[i];
        if(A[i] >= A[i - 1])
        {
            B.push_back(val);
            countB++;
        }

        else
        {
            C.push_back(val);
            countC++;
        }
    } 
    return 0;
}