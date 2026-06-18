#include <iostream>
using namespace std;

// factorial;

long long factorial(long long n){
    long long fact=1;
    for(int i=1;i<=n;i++){
        fact *= i;
    }
   return fact;

}
int main(){
    long long n;
    cin>> n;
    long long fact=factorial(n);
    cout<<fact;
    return 0;
}