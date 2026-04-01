#include <iostream>
using namespace std;

// sum of numbers.

int main(){
    int n;
    int sum=0;;
    cout <<"enter a number";
    cin>>n;

   for(int i=1;i<=n;i++){
    sum+=n%10;
    n=n/10;
    cout<<sum<<" ";
    
   }
   return 0;

}