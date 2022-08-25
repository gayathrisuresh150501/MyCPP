#include<iostream>
#include<math.h>
using namespace std;

float minDistance(int A, int B, int VA, int VB)
{
    float minimumDistance = sqrt((A * A) + (B * B));
    float minimum = 0.0;
    if(A <= 0 || B <= 0 || VA <= 0 || VB <= 0)
    {
        return -1;
    }
    else
    {
        while(A > 0 || B > 0)
        {
            A -= VA;
            B -= VB;
            minimum = sqrt((A * A) + (B * B));

            if(minimum < minimumDistance)
            {
                minimumDistance = minimum;
            }

        }

    }
    if(minimumDistance == 0.0)
    {
        return 0.0;
    }
    return minimumDistance;
}

int main()
{
    int A, B, VA, VB;
    cin >> A >> B;
    cin >> VA >> VB;

    cout << minDistance(A, B, VA, VB);    
    return 0;
}