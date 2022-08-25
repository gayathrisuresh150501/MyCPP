#include<bits/stdc++.h>
using namespace std;

float calculateEMI(float principalAmt, float interest, float timeByBank)
{
    float EMI = principalAmt * interest / (1 - 1 / pow((1 + interest),(timeByBank * 12)));
    return EMI;
}

int main()
{
    float Principal, sumA = 0.0, sumB = 0.0;
    cin >> Principal;

    int TotalTimePeriod;
    cin >> TotalTimePeriod;

    int N1;
    cin >> N1;
    while(N1)
    {
        float interestA, timeA;
        cin  >> timeA >> interestA;
        sumA += calculateEMI(Principal, interestA, timeA);
        N1--;
    }

    int N2;
    cin >> N2;
    while(N2)
    {
        float interestB, timeB;
        cin >> timeB >> interestB;
        sumB += calculateEMI(Principal, interestB, timeB);
        N2--;
    }

    if(sumA < sumB)
    {
        cout << "Bank A";
    }

    else
    {
        cout << "Bank B";
    }
    
    return 0;
}