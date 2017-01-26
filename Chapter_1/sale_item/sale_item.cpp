#include <iostream>
#include "Sales_item.h"

using namespace std;

int main(void)
{
    Sales_item total; // var used to save next trade record
    // read the first trade record
    if (cin >> total) {
        Sales_item trans;       //save sum 
        // read rest records
        while (cin >> trans) {
            // if same ISBN
            if (total.isbn() == trans.isbn())
                total += trans; //update sum
            else {
                cout << total << endl;
                total = trans;  //total -> trans
            }
        }
        cout << total << endl; //print last record
    } else {
        // no inpur warning!
        cout << "No data!" << endl;
        return -1;
    }

    return 0;
}