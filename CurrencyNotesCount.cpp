#include <iostream>
using namespace std;

int main()
{
    int amount;
    int notes500 = 0, notes100 = 0, notes50 = 0, notes20 = 0, notes10 = 0, notes5 = 0, notes2 = 0, notes1 = 0;

    cout << "Enter the amount: ";
    cin >> amount;

    if (amount >= 500)
    {
        notes500 = amount / 500;
        amount -= notes500 * 500;
    }
    if (amount >= 100)
    {
        notes100 = amount / 100;
        amount -= notes100 * 100;
    }
    if (amount >= 50)
    {
        notes50 = amount / 50;
        amount -= notes50 * 50;
    }
    if (amount >= 20)
    {
        notes20 = amount / 20;
        amount -= notes20 * 20;
    }
    if (amount >= 10)
    {
        notes10 = amount / 10;
        amount -= notes10 * 10;
    }
    if (amount >= 5)
    {
        notes5 = amount / 5;
        amount -= notes5 * 5;
    }
    if (amount >= 2)
    {
        notes2 = amount / 2;
        amount -= notes2 * 2;
    }
    if (amount >= 1)
    {
        notes1 = amount;
    }

    cout << "Total numbers of notes:" << endl;
    cout << "Notes of 500 = " << notes500 << endl;
    cout << "Notes of 100 = " << notes100 << endl;
    cout << "Notes of 50 = " << notes50 << endl;
    cout << "Notes of 20 = " << notes20 << endl;
    cout << "Notes of 10 = " << notes10 << endl;
    cout << "Notes of 5 = " << notes5 << endl;
    cout << "Notes of 2 = " << notes2 << endl;
    cout << "Notes of 1 = " << notes1 << endl;

    return 0;
}
