#include <iostream>

using namespace std;

int main()
{
    int x=0;
    cin >> x;
    int number=0, Positive =0 , Negative=0, Even=0, Odd=0;
    for (int i = 0; i < x; i++) {
        cin >> number;
        if (number % 2 == 0) {
            Even++;
        }
         if (number % 2 !=0) {
            Odd++;
        }
        if (number > 0) {
             Positive++;
        }
         if (number < 0) {
             Negative++;
        }


    }
    cout << "Even: " << Even << endl;
    cout << "Odd: " << Odd << endl;
    cout << "Positive: " << Positive << endl;
    cout << "Negative: " << Negative << endl;

    return 0;
}
