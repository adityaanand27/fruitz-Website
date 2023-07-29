//reverse a integer
#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the Number"<<endl;
    int n;
    cin>>n;
    int ans=0;
    while (n!=0)
    {

        if(ans>INT32_MAX/10 || ans<INT32_MIN/10){
            return 0;
        }
        int digit= n % 10 ;
        ans = (ans * 10 ) + digit;
        n=n/10;
    }
    cout<<"The Equivalant reverse of integer is "<<ans<<endl;
    return 0;
}