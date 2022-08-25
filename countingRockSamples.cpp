#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    int SampleSize, NoOfRange; 
    cin >> SampleSize >> NoOfRange;

    int Arr[SampleSize], count[NoOfRange];
    for(int i = 0; i < SampleSize; i++)
    {
        cin >> Arr[i];
    }
    vector<int> rangeCounts;

    while(NoOfRange)
    {
        int ll, ul, count = 0;
        cin >> ll >> ul;
        for(int i = 0; i < SampleSize; i++)
        {
            if(Arr[i] >= ll  &&  Arr[i] <= ul)
            {
                count++;
            }
        }
        rangeCounts.push_back(count);
        NoOfRange--;
    }

    for(int l: rangeCounts)
    {
        cout << l << " ";
    }

    
    return 0;
}