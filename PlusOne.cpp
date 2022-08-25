#include<iostream>
#include <bits/stdc++.h>
#include<list>
#include<vector>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T)
    {
        int N, val;
        cin >> N;
        vector<int> A(N);
        for(int i = 0; i < N; i++)
        {
            cin >> A[i];
            val = A[i];
        }
        int temp = val, lnum, rnum;
        
        val += 1;
        if(val < 10)
        {
            A.pop_back();
            A.push_back(val);
        }
        else
        {
            A.pop_back();
            rnum = val % 10;
            lnum = (val/10)%10;
            A.push_back(lnum);
            A.push_back(rnum);
        }
        for(int k: A)
        {
            cout << k << " ";
        }
        
        T--;
    }
    return 0;
}