#include <iostream>
using namespace std;

// check prime or not

int checkprime (int n){
    int count=0;
  for(int i=1;i<=n;i++){
        if(n%i==0){
            count++ ;
        }
    }        

    if(count==2){
        cout<<"Prime";
    }else{
        cout<<"Not Prime";
    }
    return 0;
}


int main(){
    int n;
    cin>>n;
    checkprime(n);
    return 0;
}