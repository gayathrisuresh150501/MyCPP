#include<iostream>
#include<vector>
using namespace std;

//take size input
//input array elements;
//check for progression and store max sequence in array
//hold size value

int main()
{
    int N, val;
    cin >> N;
    vector<int> A, B, C;

    //to read input array
    for(int i = 0; i < N; i++)
    {
        cin >> val;
        A.push_back(val);
    }
    B.push_back(A[0]);
    int count1 = 0, count2 = 0;
    

    //to check for progression and count the progression length
    for(int i = 1; i < N; i++)
    {
        if(A[i] >= B[i-1])     
        {
            val = A[i];
            B.push_back(val);
            count1++;              
        }
        else if(A[i] < B[i - 1] || A[i] => C[i - 1])            
        {
            val = A[i];
            C.push_back(val);
            count2++;
        }
        else
        {
            C.push_back(A[i]);
        }        
    }
    if(count1 > count2)
    {
        C.clear();
        count2 = 0;
        for(int j : B)
        {
            cout << j << " ";
        }

    }
    else
    {
        B.clear();
        count1 = 0;
        for(int j : B)
        {
            cout << j << " ";
        }
    }
    return 0;
}