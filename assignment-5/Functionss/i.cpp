#include <iostream>
using namespace std;

// find hcf

#define int long long

int findhcf(int a,int b){
    for(int i=1; b!=0;i++){
    int temp=a%b;
    a=b;
    b=temp;

    }
    return a;
}

signed main(){
    int a,b;
    cin>> a >> b;
    int hcf=findhcf(a,b);
    cout<< hcf <<endl;
  
}