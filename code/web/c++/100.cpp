#include<iostream>
using namespace std;
int fact(int m){
    if(m == 0)
        return 1;
    
    
int small = fact(m-1);
int big = m*small;
return big;
    

}
int main()
{
cout<<"Enter the number"<<endl;int n;
cin>>n;
int ans = fact(n);
cout<<ans<<endl;
return 0;
}