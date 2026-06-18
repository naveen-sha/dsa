#include <iostream>
using namespace std;

// print ncr(binomial coefficient).

int fact(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans *= i;

    }
    return ans;
 }

 int main(){
    int n,r;
    cin>> n>>r;
    // n!
    int nfact=fact(n);
    // r!
    int rfact=fact(r);
    // nrfact!
    int nrfact=fact(n-r);
    cout<< nfact/(rfact*nrfact)<<endl;
    

 }

