#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for (int x=2;x<=n;x+=2)
    {
     if (x>=2)
     cout << x << "\n";
    }
    if (n<=1)
        cout<< "-1 \n";
    return 0;
}
