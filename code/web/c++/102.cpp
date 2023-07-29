//Say digits
#include<iostream>
using namespace std;
void say(int n,string arr[]){
    //base case
    if(n==0){
        return ;
    }
    int digit = n%10;
    n=n/10;

    say(n,arr);
    cout<<arr[digit]<<endl;
}
int main()
{
      string arr[10] = {"zero", "one", "two", "three",
                         "four", "five", "six"
                        , "seven", "eight", "nine"};
                           int n;
    cin >> n;

    cout << endl << endl << endl ;
    say(n, arr);
    cout << endl << endl << endl ;
 return 0;
}