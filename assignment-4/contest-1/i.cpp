#include <iostream>
using namespace std;

// count zeroes in a number

int main() {
    long long N;
    cin >> N;

    if (N == 0) {
        cout << 1;
        return 0;
    }

    int count = 0;

    while (N > 0) {
        if (N % 10 == 0)
            count++;

        N = N / 10;
    }

    cout << count;

    return 0;
}