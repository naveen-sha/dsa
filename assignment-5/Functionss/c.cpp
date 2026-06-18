#include <iostream>
using namespace std;

// print factor in reverse of number.

int reversefactor(int n){
    for(int i=n;i>=1;i--){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;

}

int main(){
    int n;
    cin>>n;
    reversefactor(n);
}