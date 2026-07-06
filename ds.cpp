#include <iostream>
#include <type_traits>
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
// factor of an number..................
/*int factor(int n){
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
}*/

/*int main(){
  int n;
  cin>> n;
  int count=0;
  for(int i=1;i<=n;i++){
    if(n%i==0){
      count++;
    }
  }
  cout <<count<<endl;
}
*/
// today is 2 july 2026 now we learn  variable scoping ................................................................................................

// scoping where varibles are declared and where they can be accessed.
/*int x=10;
int main(){
  int x=20;
   cout<<::x<< endl;// we can this::scope resolution  to access globle variable.
}*/
   // if we have multiple we can print the closest one.
   //example of scoping 

   /*int x=10;
   void fun(){
    int x=20;
    cout<<x<<endl;
   }

   int main(){
    cout<<x<<endl;
    fun();
    cout<<x<<endl;
   }*/

  //  overflow 

/*
when the value of a variable exceeds the maximum value it can hold, it is called overflow.
int have a maximum value of 2^31-1=2147483647
long long have a maximum value of 2^63-1=9223372036854775807
from remove it we can use #int long long to avoid overflow.
and but we can change int main to signed main().
then it will work for both int and long long.
*/
/*# define int long long
int main(){
  cout <<1000000000000000000<<endl;

}*/


//...............................................................................................................................................................
//..............................Arrays...........................................................................................................................................

/*
arrays is a collection of similar kind of data stored together at continous memory location .

it helps us create multiple data variable of same data type using a single name.

indexing start from zero and n-1 ,where n is total no. of element in the array.
*/
/*
#creating an array.

datatype arrayname[number_of_element];
int a [20];
float b[30];
long long c[500];

#advanced.......................................

if we want to store all data type vale .

use 

variant <int,float,bool>arr[3];
int main(){

arr[0]=10;
arr[1]=3.14f;
arr[2]=true;

}

.................................................

once you created and array ,all element can have any random value (often reffered as garbage value).

int main(){
  int a[5]={};
  cout<<a<<endl;
// } give random garbage value.

*/
/*
..................................................................................................

// print array in reverse order

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<=n-1;i++){
        cin>>a[i];
    }
    for(int i=n-1;i>=0;i--){
        cout<< a[i]<<" ";
    }

}*/

