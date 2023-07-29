#include<iostream>
using namespace std;
int pw(int n){
    if(n == 0){
        return 1;
    }
    int small = pw(n-1);
    int big = 2 * small;
    return big;}
int main()


{
 int n;cin>>n;
 int ans = pw(n);
 cout<<ans;
 return 0;
}