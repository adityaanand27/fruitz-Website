//finding maximum and minimum in the array
#include<iostream>
using namespace std;

int main(){
  int a[50];
  cout<<"Enter the number of elements"<<endl;
  int n;
  cin>>n;

  cout<<"Now,Enter the elements"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<"Now the elements are..."<<endl;
    for (int i = 0; i < n; i++)
    {
       cout>>a[i];
    }
    return 0;
}