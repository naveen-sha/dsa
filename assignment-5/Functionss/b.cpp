#include <iostream>
using namespace std;

// print factor-I
int printfactor(int n){
    
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}
int main(){
    int n;
    cin>>n;
    printfactor(n);

}
