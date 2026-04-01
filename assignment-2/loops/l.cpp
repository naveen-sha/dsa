#include <iostream>
using namespace std;

//  sum of digits.

int main(){
    int n;
    cin>>n;
    int sum=0;
    for (int i=1;n!=0;i++){
        sum+=n%10;
        n=n/10;
    }
    cout<<sum;
    return 0;
}