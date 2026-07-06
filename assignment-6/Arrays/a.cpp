#include <iostream>
using namespace std;

// print array in reverse order

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<=n-1;i++){
        cin>>a[i];
    }
    for(int i=n-1;i>=0;i--){
        cout<< a[i]<<" ";
    }

}