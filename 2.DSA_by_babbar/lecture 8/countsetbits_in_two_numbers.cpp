#include <iostream>
using namespace std;

int countsetbit(int n, int m) {
    int count = 0;

    // Count set bits in n
    while (n != 0) {
        if (n & 1) {
            count++;
        }
        n = n >> 1;
    }

    // Count set bits in m
    while (m != 0) {
        if (m & 1) {
            count++;
        }
        m = m >> 1;
    }

    return count;
}

int main() {
    int a, b;
    cin >> a >> b;

    int ans = countsetbit(a, b);
    cout << ans << endl;

    return 0;
}
