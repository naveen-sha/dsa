#include <iostream>
using namespace std;

// check leap year 

int main(){
    int n;
    cin>>n;
    if((n%100==0 && n%400==0) or (n%100!=0 && n%4==0)){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}