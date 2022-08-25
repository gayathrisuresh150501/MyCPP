#include<iostream>
#include<vector>
using namespace std;
int main()
{
    /*vector<int> myVector(5,1);
    for (int i : myVector)
    {
       
        cout << i << " ";
    }*/
    vector<int> v;
    cout << v.capacity();
    
    v.push_back(5);
    for (int i : v)
    {
         cout << i << " ";
    }
    
    return 0;
}