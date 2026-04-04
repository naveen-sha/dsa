#include <iostream>
using namespace std;

// reverse number and store in a variable.

int main(){
    long long n;
    cin>>n;
    long long rev=0;
    for(int i=0;n!=0;i++){
        rev=(rev*10)+n%10;
        n=n/10;
    }
    cout<<rev;
    return 0;
}
