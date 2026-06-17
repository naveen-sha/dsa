#include <iostream>
using namespace std;

// ...........................................................................................................................................................
// -----------100xdsa------------------------.

// binomial coefficient
 /*int fact(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans *= i;

    }
    return ans;
 }

 int main(){
    int n,r;
    cin>> n>>r;
    // n!
    int nfact=fact(n);
    // r!
    int rfact=fact(r);
    // nrfact!
    int nrfact=fact(n-r);
    cout<< nfact/(rfact*nrfact)<<endl;
    

 }*/

 // Some more examples.

 /* int sum2(int a ,int b,int c){
   return a+b-c;
 }

 int main(){
   int a,b,c;
   cin>>a>>b>>c;
 int sum=sum2(a,b,c);
 cout << sum <<endl;
 };
 */
// print 1 to n no. of integers

/*void print1ton(int n){
  for(int i=1;i<=n;i++){
    cout<< i << " ";
  }
  cout << endl;

}

int main(){
  int x,y,z;
  cin>>x>>y>>z;

  print1ton(x);
  print1ton(y);
  print1ton(z);
}
*/
// printsquare.

/*void printsquare(int n,char ch){
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      cout<< ch;
    }
    cout <<endl;
  }
  
}

int main(){
  printsquare(4,'^');
}
*/
// rules of function
/*
1. numbers of parameters must match.
2. return type must match.
3. return ends the function.
4  a function may or may not return.
    . int , double , bool --> returns value.
    . void --> prints only

*/

int factor(int n){
  for(int i=1;i<n;i++){
    if(n%i==0){
     
     cout <<i<<" ";
    }

  }
  
}

int main(){
  int n;
  cin>> n;
  int fact=factor(n);
  cout<< fact<<endl;
  return 0;
}



   
   