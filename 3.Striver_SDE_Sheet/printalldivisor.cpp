#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

void printalldivisor(int n) {
    vector<int> ls;

    for (int i = 1; i*i <=n; i++) {
        if (n % i == 0) {
            ls.push_back(i);

            if ((n / i) != i) {
                ls.push_back(n / i);
            }
        }
    }

    sort(ls.begin(), ls.end());

    for (auto i : ls)
        cout << i << " ";
}

int main() {
    int n;
    cin >> n;       // FIXED: cin<<n was incorrect
    printalldivisor(n);
    return 0;
}
