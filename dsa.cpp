 #include<iostream>
using namespace std;
/* int main(){
    cout << "namaste duniya" <<endl;  
};

int main(){
int a =123;
    cout << a<<endl;
    char b='v';
    cout << b<<endl;
    bool bl=true;
    cout<< bl <<endl;
    float fl=2.0;
    cout << fl <<endl;
    double d=1.23;
    cout << d << endl;
    int size = sizeof(b);
    cout<< size <<endl; */
    // type casting ...
    /* int a='n';
    cout<< a<< endl;
    char ch =110;
    cout<< ch<<endl;
    char ch1=-5;
    cout<<ch1<<endl;
    */
//   unsigned value stored it represent only positve numbers .
/* unsigned int a=-786;
   cout<<a<<endl;*/
   /* int a=2/5;
   cout<<a<<endl;*/
// this is beacuse when we devide int/int it give us int and when we divide float/int it give us float.basically thee firt datatype is what then the output is that datatype.
// relationl opertors ..
/*int a=7;
int b=5;
bool first =(a==b);
cout<<first<<endl;
bool second =(a>b);
cout<<second<<endl;
bool third =(a<b);
cout<<third<<endl;
bool fourth =(a<=b);
cout<<fourth<<endl;
bool fifth =(a>=b);
cout<<fifth<<endl;*/
// logical opertors &&,||,!.*/
// int main(){
    //int n;
   // cin>>n;
    // cout<<"value of n is:"<<n <<endl;
    // checking condition  if a is positive .
   /* if(n>0){
        cout<<"a is positive"<<endl;
    }else{
        cout<<"a is negative"<<endl;
    };*/
    /*int a,b;
    cin >> a>>b;
    
    if(a>b){
        cout<<"a is greater than b"<<endl;
    }else{
        cout<<"b is greater than a"<<endl;
    }
    in this we can aslo  add tap space in input.
    a=cin.get();
    cout<<"value of a is :"<<a <<endl;
*/
/*int a;
cout<<"enter a value of a"<<endl;
cin>>a;
if(a>0){
    cout<<"A is positive";

}else if(a<0)
    {
        cout<<"A is negative "<<endl;

    }else{
        cout<<"A is zero"<<endl;
    }
};*/
/*int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z') {
        cout << "Lowercase" << endl;
    } 
    else if (ch >= 'A' && ch <= 'Z') {
        cout << "Uppercase" << endl;
    } 
    else if (ch >= '0' && ch <= '9') {
        cout << "Digit" << endl;
    } 
    else {
        cout << "Other character" << endl;
    }

    return 0;
}*/
//  loops in c++...................
//  print 1to n no.
/* int main(){
    int n;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        cout<<i<<" ";
        i++;
    }
    
}
    */
/* int main(){
    int n; 
    cin>>n;
    int i=2;
    int sum=0;
   
    while (i<=n)
    {
      if(n/2==0){
         sum=sum+i;
         i++;
        }
    }
    cout<<"value of sum is:"<<sum <<endl;
    
   }
    */
   /* int main(){
    int n;
   cin>>n;
   int i=2;
   while (i<n)
   {
    if(n%i==0){
        cout<< "not prime "<<i<<endl;

    }else{
        cout<<"prime for"<<i<<endl; 
    }
    i++;
   }*/
//    create a square star pattern.
/* int main(){
    int n ;
    cin>>n;
    int i =1;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }

    

}*/
/* int main(){
    int n;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<i;
            j++;

        }
        cout<<endl;
        i++;
    
    }
}*/
/* int main(){
    int n ;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=i)
        {
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
        
    }
    

}
*/
// simple star.
 /* int main (){
    int n;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=i)
        {
            cout<<i;
            j++;
        }
        cout<< endl;
        i++;
        
    }
    
 }
    */
   /* int main(){
    int n;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
              cout<<j;
              j++;
        }
        cout<<endl;
        i++;
    }
    
   }
    */
 /*  int main(){
    int n;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
              cout<<n-j+1;
              j++;
        }
        cout<<endl;
        i++;
    }
    
   }
*/
/*
1 2 3 4 5 
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25
*/
   /*int main(){
    int n ;
    cin >>n;
    int i=1;
    int count =1;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {

            cout <<count<<" ";
            count++;
            j++;

        }
        cout<<endl;
        i++;
        
    }
    
   }*/
/*
*
**
***
****
*****
*/
/* int main(){
    int n;
    cin >>n;
    int i=1;
    char s='*';
    while (i<=n)
    {
        int j=1;
        while (j<=i)
        {
            cout <<s;
            j++;
        }
        cout<<endl;
        i++;
        
    }
    
}
    */
   /*
1
22
333
4444
55555
*/
   /* int main(){
    int n;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=i)
        {
            cout<<i;
            j++;
        }
        cout <<endl;
        i++;
    }
    
   }
    */
   /*
1      
2 3     
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21
*/
   /* int main(){
    int n;
    cin>>n;
    int row=1;
    int count =1;
    while (row<=n)
    {
        int col=1;
        while (col<=row)
        {
            cout<<count<<" ";
            count++;
            col++;
        }
        cout <<endl;
        row++;

    }
    
   }
    */
   /*
1
23
345
4567
56789
*/
/*int main() {
    int n;
    cin >> n;

    int i = 1, j;

    while (i <= n) {

        j = 1;
        while (j <= i) {
            cout << (i + j - 1);
            j++;
        }

        cout << endl;
        i++;
    }

    
}
    */
   /*
1
21
321
4321
54321
*/
/* int main(){
    int n;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=i)
        {
            cout <<i-j+1;
            j++;
        }
        cout <<endl;
        i++;
    }
    
}*/
/* 
AAAAA
BBBBB
CCCCC
DDDDD
EEEEE
*/
/* int main(){
    int n;
    cin>>n;
    int row=1;
    while (row<=n)
    {
        int col=1;
        while (col<=n)
        {
            char ch= 'A' + row-1;
            cout<< ch;
            col++;
        }
        cout<< endl;
        row++;
        
    }
    
}
    */
   /*
ABCDE   
ABCDE   
ABCDE
ABCDE
ABCDE
*/
  
    /* int main(){
    int n;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            char ch='A'+j-1;
            cout <<ch;
            j++;
            
        }
        cout<<endl;
        i++;
        
    }
    
   }
    */
   /*
ABCD
EFGH
IJKL
MNOP
*/

   /* int main(){
    int n;
    cin>>n;
    int i=1;
    char start='A';
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<start;
            start++;
            j++;
            
        }
        cout<<endl;
        i++;
    }
    
   }
    */
   /*
ABCDE
BCDEF
CDEFG
DEFGH
EFGHI
*/
// mine...
   /* int main(){
    int n;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        char ch='A'+i-1;
        while (j<=n)
        {
            cout <<ch;
            ch++;
            j++;
        }
        cout<<endl;
        i++;

        
    }
    
   }*/
//   baber....
/* int main(){
    int n;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        char ch='A'+i+j-2;
        while (j<=n)
        {
            cout <<ch;
            ch++;
            j++;
        }
        cout<<endl;
        i++;

        
    }
    
   }*/
  /*
A
BB
CCC
DDDD
EEEEE
*/
/* int main(){
    int n;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=i)
        {
            char ch='A'+i-1;
            cout<<ch;
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
    
}
*/ 
/*
A 
B C
C D E
D E F G
E F G H I
*/
/* int main(){
    int n;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        char ch='A'+i-1;
        while (j<=i)
        {
            cout<<ch<<" ";
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
    
}
    /*
G 
F G
E F G
D E F G
C D E F G
B C D E F G
A B C D E F G
    */
   /* int main(){
    int n;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        char ch='A'+n-i;
        while (j<=i)
        {
            cout<< ch<<" ";
            ch++;
            j++;
        }
        cout<<endl;
        i++;


    }
    
   }
*/
/*
     *
    **
   ***
  ****
 *****
******
*/
/* int main(){
    int n;
    cin>>n;
    int i=1;
    while (i<=n)
    {
    //  space print karo..
    int space =n -i;
    while (space)
    {
        cout <<" ";
        space--;
        
    }
    // star print karo..
    int j=1;
    while (j<=i)
    {
        cout<<"*";
        j++;
    }
    cout <<endl;
    i++;
    }
}
    */
   
//  doing more question of dsa
/* 
*****
****
***
**
*

 int main(){
    int n;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=n-i+1)
        {
          cout<<"*";
          
            j++;
        }
        cout<<endl;
        i++;
    }  
 }
 */
/*
****
 ***
  **
   *
   
    
int main(){
    int n;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int space =1;
        while (space<=i-1)
        {
            cout <<" ";
            space++;
            
        }
        // star print karo.
        int j=1;
        while (j<=n-i+1)
        {
           cout <<"*";
           j++;
    
        }
        // space print karo
    cout <<endl;
    i++;
    
    }
}
*/
/*
1111111
 222222
  33333
   4444
    555
     66
      7
int main(){
    int n;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int space =1;
        while (space<=i-1)
        {
            cout <<" ";
            space++;
            
        }
        // star print karo.
        int j=1;
        
        while (j<=n-i+1)
        {
           cout <<i;
           j++;
    
        }
        // space print karo
    cout <<endl;
    i++;
    
    }
}
*/
/*

   1
  22
 333
4444
*/
/* int main(){
    int n;
    cin>>n;
    int i=1;
    while (i<=n)
    {
    //  space print karo..
    int space =n -i;
    while (space)
    {
        cout <<" ";
        space--;
        
    }
    // star print karo..
    int j=1;
    while (j<=i)
    {
        cout<<i;
        j++;
    }
    cout <<endl;
    i++;
    }
}
    */ 
/*
12345
 2345
  345
   45
    5
    */
   /*int main(){
    int n;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int space =1;
        while (space<=i-1)
        {
            cout <<" ";
            space++;
            
        }
       
        int j=1;
        while (j<=n-i+1)
        {
           cout <<j+i-1;
           j++;
    
        }
        // space print karo
    cout <<endl;
    i++;
    
    }
}
    */
   /*
    1
   23
  345
 4567
56789

 int main(){
    int n;
    cin>>n;
    int i=1;
    while (i<=n)
    {
    //  space print karo..
    int space =n -i;
    while (space)
    {
        cout <<" ";
        space--;
        
    }
    // star print karo..
    int j=1;
    while (j<=i)
    {
        cout<<i+j-1;
        j++;
    }
    cout <<endl;
    i++;
    }
}
    
   */
  /*
    1
   121
  12321
 1234321
123454321
 
  int main(){
    int n;
    cin>>n;
    int i=1;
    while (i<=n)
    {
    //  space print karo..
    int space =n -i;
    while (space)
    {
        cout <<" ";
        space--;
        
    }
    // star print karo..
    int j=1;
    while (j<=i)
    {
        cout<<j;
       
        j++;
    }
    int one=i-1;
    while (one)
    {
        cout<<one;
        one--;
    }
    
    cout <<endl;
    i++;
    }
}
    */
  /*
1234554321
1234**4321
123****321
12******21
1********1
 int main (){
    int n;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=n-i+1)
        {
            cout<<j;
            j++;
        }
        int star=2;
        while (star<=i)
        {
            cout<<"*"<<"*";
            star++;
        }
        int k=n-i+1;
        while (k)
        {
            cout<<k;
            k--;
        }
        
        cout<<endl;
        i++;
    }
    

   }
    */

/*    
*****                
 ****
  ***
   **
    *
 int main(){
    int n;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int space =1;
        while (space<=i-1)
        {
            cout <<" ";
            space++;
            
        }
        // star print karo.
        int j=1;
        while (j<=n-i+1)
        {
           cout <<"*";
           j++;
    
        }
        // space print karo
    cout <<endl;
    i++;
    
    }
} 
*/





   
   