#include <iostream>
using namespace std;

// print second last digit

int main(){
    int n;
    cin >> n;
    n = n/10;
    int ans = n%10;
    cout << ans << endl;
    return 0;
}