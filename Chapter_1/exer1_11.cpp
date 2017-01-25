#include <iostream>

using namespace std;

int main(void)
{
    int a, b;

    cout << "Enter 2 integers: ";
    cin >> a >> b;

    if (a > b) {
        cout << "Integers between " 
             << b << " and " << a << ": ";
        while (a - 1 > b) {
            cout << ++b;
            if (b) cout << " ";
        }
    } else if (a < b) {
        cout << "Integers between "
             << a << " and " << b << ": ";
        while (a < b - 1) {
            cout << ++a;
            if (a) cout << " ";
        }
    } else {
        cout << "Same integer!" << endl;
        return 0;
    }

    cout << endl;

    return 0;
}