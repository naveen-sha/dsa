#include <iostream>
using namespace std;

// print number in reverse order.

int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    for (int i=0;n!=0;i++){
        cout<<n%10;
        n=n/10;
    }
    return 0;

}
