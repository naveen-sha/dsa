#include <iostream>
using namespace std;

// print prime no. from 1 to n.

void printPrime(int n){

    for(int i = 2; i <= n; i++){

        int count = 0;

        for(int j = 1; j <= i; j++){
            if(i % j == 0){
                count++;
            }
        }

        if(count == 2){
            cout << i << " ";
        }
    }
}

int main(){

    int n;
    cin >> n;

    printPrime(n);

    return 0;
}