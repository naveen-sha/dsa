#include <iostream>
using namespace std;

// hollow vertical triangle pattern
 
int main(){ 
    int n;
    cin >>n;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            if(j==0 || j==i || i==n){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    
   



}