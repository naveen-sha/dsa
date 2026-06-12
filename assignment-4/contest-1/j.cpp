#include <iostream>
using namespace std;

// hourglass pattern

int main() {
    int N;
    cin >> N;

    // upper part
    for (int i = 0; i < N; i++) {

        // spaces
        for (int j = 0; j < i; j++){
              cout << " ";

        }

        // dots
        for (int j = 0; j < N - i; j++) {
            cout << ".";

            // avoid trailing space
            if (j != N - i - 1)
                cout << " ";
        }

        cout << endl;
    }

    // lower part
    for (int i = N - 2; i >= 0; i--) {

        for (int j = 0; j < i; j++){
            cout << " ";
        }
            

        for (int j = 0; j < N - i; j++) {
            cout << ".";

            if (j != N - i - 1)
                cout << " ";
        }

        cout << endl;
    }

    return 0;
}