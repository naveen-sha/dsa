#include <iostream>
using namespace std;

// sum of arrays



 long long sumofarray(long long  n){

  long long arr[n];
  for(int i=0;i<=n-1;i++){
    cin>>arr[i];

  }
  long long sum=0;

  for(int i=0;i<=n-1;i++){
    sum+=arr[i];
  }
  return sum;
 

 }
 int main(){
  
  long long n;
  cin>>n;
  long long sum = sumofarray(n);
  cout<<sum<<endl;

 }
