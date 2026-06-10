#include <iostream>
using namespace std;

// check vovels

int main(){
    char s;
    cin >> s;
    if(s=='a' || s=='e' || s=='i' || s=='o' || s=='u'){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;

}