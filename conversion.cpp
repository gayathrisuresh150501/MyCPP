#include<bits/stdc++.h>
using namespace std;

int binToDec(int n)
{
    int twoPow = 1, decVal = 0;
    while(n)
    {
        int rem = n % 10;
        decVal += rem * twoPow;
        twoPow *= 2;
        n /= 10;
    }
    return decVal;

}

int octToDec(int n)
{
    int octVal = 0, eightVal = 1;
    while(n)
    {
        int rem = n % 10;
        octVal += eightVal * rem;
        eightVal *= 8;
        n /= 10;
    }
    return octVal;
}

int hexToDec(string n)
{
    int hexVal = 1, ans = 0;
    int s = n.size();
    for(int i = s - 1; i >= 0; i--)
    {
        if(n[i] >= '0' && n[i] <= '9')
        {
            ans += hexVal * (n[i] - '0');
        }

        else if(n[i] >= 'A' && n[i] <= 'F')
        {
            ans += hexVal * (n[i] - 'A' + 10);
        }
        hexVal *= 16;
    }
    return ans;
}

int main()
{
    //int n;
    string num;
    cin >> num;
    //cout << binToDec(n); //give input in binary
    //cout << octToDec(n); //give input in octal
    cout << hexToDec(num);
    return 0;
}