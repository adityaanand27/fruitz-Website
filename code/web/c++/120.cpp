#include<iostream>
using namespace std;
int fact(int n){
    if(n==0)
      return 1;
    else
      return n = n * fact(n-1) ;
}
int main()
{
    int n;
    cin>>n;
   m= fact(n);
   cout<<m;
 return 0;
}

