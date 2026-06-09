#include <iostream>
using namespace std;

// hollow vertical triangle pattern
 
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(j==0 || j==i){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
    for(int i=n-1;i>0;i--){
        for(int j=0;j<i;j++){
            if(j==0 || j==i-1){
                cout << "* ";
            }
            else{
                    cout << "  ";
                }
            }
            cout << endl;
        }
        
        return 0;
    };
    


    
   



