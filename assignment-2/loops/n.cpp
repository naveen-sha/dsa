#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long original = n;
    long long rev = 0;

    while(n != 0) {
        int digit = n % 10;   // take last digit
        rev = rev * 10 + digit; // add to reverse
        n = n / 10;          // remove last digit
    }

    if(original == rev)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}