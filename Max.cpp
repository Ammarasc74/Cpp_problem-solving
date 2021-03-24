#include <iostream>

using namespace std;

int main()
{
    int x=0,number,maximum=0;
    cin>>x;
    for(int i=0;i<x;i++)
    {
    cin>>number;
    if (number>maximum)
        {
        maximum=number;}
    }
    cout<< maximum << endl;

    return 0;
}

