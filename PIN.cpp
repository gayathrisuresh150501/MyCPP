#include<iostream>
using namespace std;

int PIN(int input1, int input2, int input3)
{
// Write code and remove the below exception.
    int first[3];
    int second[3];
    int third[3];
    int firstMin, secondMin, thirdMin;

    first[0] = input1 % 10;
    first[1] = input2 % 10;
    first[2] = input3 % 10;

    second[0] = (input1 / 10) % 10;
    second[1] = (input2 / 10) % 10;
    second[2] = (input3 / 10) % 10;

    third[0] = (input1 / 100) % 10;
    third[1] = (input2 / 100) % 10;
    third[2] = (input3 / 100) % 10;

    //int firstMin, secondMin, thirdMin;
    for(int i = 0; i < 3; i++)
    {
        if(firstMin > first[i])
        {
            firstMin = first[i];
        }
    }

    for(int i = 0; i < 3; i++)
    {
        if(secondMin > second[i])
        {
            secondMin = second[i];
        }
    }

    for(int i = 0; i < 3; i++)
    {
        if(thirdMin > third[i])
        {
            thirdMin = third[i];
        }
    }

    int max1 = 0, max2 = 0, max3 = 0, min1 = 0, min2 = 0, min3 = 0;
    for(int i = 0; i < 3; i++)
    {
        if(max1 < first[i])
        {
            max1 = first[i];
        }
    } 

    for(int i = 0; i < 3; i++)
    {
        if(max2 < second[i])
        {
            max2 = second[i];
        }
    } 

    for(int i = 0; i < 3; i++)
    {
        if(max3 < third[i])
        {
            max3 = third[i];
        }
    } 
    int fourthDig = 0;
    if(max1 >= max2 && max1 >= max3)
    {
            fourthDig = max1;
    }
    else if(max2 >= max3 && max2 >= max1)
    {
            fourthDig = max2;
        
    }
    else
    {
        fourthDig = max3;
    }

    int finalPin = (fourthDig * 1000) + (thirdMin * 100) + (secondMin * 10) + firstMin;
    return finalPin;
    
}
int main()
{
    int num;
    num = PIN(123,456,789);
    cout << num;
}