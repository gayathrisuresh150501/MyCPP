#include<iostream>
using namespace std;
/*
  *
 **
***
*/

int main()
{
    int height;
    cin >> height;
    for(int i = 0; i < height; i++,cout << endl)
    {
        for(int j = 1; j <= height; j++)
        {
            if(j <= height - i)
            {
                cout << " ";
            }   
            else
            {
                cout <<"*";
            }     
        }

    }
    return 0;
}