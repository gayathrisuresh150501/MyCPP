#include<iostream>
#include<sstream>
#include<list>
using namespace std;

int main()
{
    list<int> inp; 
    //getline(cin, inp);
    //string one = inp[0];
    inp.push_back(1);
    inp.push_back(2);
    inp.push_back(3);
    inp.push_back(4);
    inp.push_back(5);
    list<int> :: iterator i;
    for(i = inp.begin(); i != inp.end(); i++)
    {
        cout << *i << " ";
    }
    return 0;
}