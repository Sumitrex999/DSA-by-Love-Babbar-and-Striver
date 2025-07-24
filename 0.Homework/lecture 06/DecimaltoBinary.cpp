#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter the integer: ";
    cin >> n;

    if (n == 0) {
        cout << "Binary of integer is 0";
        return 0;
    }

    int ans = 0;
    int power = 1; // To multiply with 10

    while (n > 0) {
        int bit = n & 1;
        ans = ans + bit * power;
        n = n >> 1;
        power = power * 10; // Increase power of 10
    }

    cout << "Binary of integer is " << ans;

    return 0;
}
