#include <iostream>

using namespace std;

int main(void)
{
    int small, big;

    cout << "Enter two integers: ";
    cin >> small >> big;

    if (small > big) {
        int temp = small;
        small = big;
        big = temp;
    }
    if (small == big) {
        cout << "Same ingteger!" << endl;
        return 0;
    }

    cout << "Integers between "
         << small << " and " << big <<": ";
    while (small < big - 1)
        cout << ++small << " ";
    cout << endl;

    return 0;
}