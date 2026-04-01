#include <iostream>
using namespace std;

// sum of all natural numbers.

int main(){
    int n;
    cin>>n;
    long long sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
      
    }
     cout<<sum; 

    return 0;
}