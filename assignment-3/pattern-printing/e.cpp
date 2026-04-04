#include <iostream>
using namespace std;

// hollow rectangle pattern of stars

int main(){
    int rows,col;
    cin >> rows >> col;
    for(int i=0;i<rows;i++){
        for(int j=0; j<col;j++){
            if( i==0 || i== rows-1 || j==0|| j==col-1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}