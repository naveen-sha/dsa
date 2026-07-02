#include <iostream>
using namespace std;

// count zeros.

# define int long long 

int countzeros(int n){
    int count=0;
    if(n==0){
        return 1;
    }
    for(int i=1;n!=0;i++){
        if(n%10==0){
            count++;
        }
        n=n/10;
    }
   
    return count;
}

signed main(){
    int n;
    cin>> n;
    int count=countzeros(n);
    cout<< count <<endl;
  
}