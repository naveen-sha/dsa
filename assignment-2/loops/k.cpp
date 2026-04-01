#include <iostream>
using namespace std;

// pint number in reverse.

int main(){
    long long n;
    int ans=0;
    cin>>n;

    for(int i=0;n!=0;i++){
        ans=(ans*10)+n%10;
        n=n/10;
    }
    cout<<ans;

}