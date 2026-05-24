#include <iostream>
using namespace std;

// count numbers.

int main(){
    int n;
    cin >> n;
    int count=0;
    for (int i=0;n!=0;i++){
        count++;
        n=n/10;
    }
    cout << count << endl;

    return 0;


}