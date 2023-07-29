#include<iostream>
using namespace std;
int fibbo(int n){
    if(n==0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }
   int ans = fibbo(n-1) + fibbo(n-2);
   return ans;
}
int main()
{
cout<<"Enter the position"<<endl;
int n;
cin>>n;
//this will return the value at that fibbo(n) series
int ans1 = fibbo(n);
cout<<ans1;

return 0;
}