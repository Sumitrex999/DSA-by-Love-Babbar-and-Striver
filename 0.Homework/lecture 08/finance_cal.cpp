#include <iostream>
using namespace std;

int main() {
    int amount;
    cout << "Enter the total amount: ";
    cin >> amount;

    int hundreds = 0, fifties = 0, twenties = 0, ones = 0;

    while (amount > 0) {
        char op;

        if (amount >= 100) {
            op = 'x';
        } else if (amount >= 50) {
            op = 'y';
        } else if (amount >= 20) {
            op = 'z';
        } else {
            op = 'a';
        }

        switch (op) {
            case 'x':
                hundreds = amount / 100;
                amount %= 100;
                break;
            case 'y':
                fifties = amount / 50;
                amount %= 50;
                break;
            case 'z':
                twenties = amount / 20;
                amount %= 20;
                break;
            case 'a':
                ones = amount;
                amount = 0;
                break;
            default:
                cout << "Invalid operation." << endl;
                amount = 0;
        }
    }

    cout << "Number of 100 rupee notes: " << hundreds << endl;
    cout << "Number of 50 rupee notes: " << fifties << endl;
    cout << "Number of 20 rupee notes: " << twenties << endl;
    cout << "Number of 1 rupee notes: " << ones << endl;

    return 0;
}
