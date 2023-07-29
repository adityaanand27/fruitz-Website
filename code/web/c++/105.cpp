//to find whether the array is sorted or not
#include<iostream>
using namespace std;
bool sortedit(int arr[],int size){
    //base
    if(size == 0 || size ==1 ){
        return 1;
    }
    //processing
    if(arr[0]>arr[1]){
        return 0;
    }
    //recursive part
    int ans = sortedit(arr+1,size-1);
    return ans;
}
int main()
{
     int arr[7]={1,4,5,7,9,9,55};
    bool m=sortedit(arr,7);
      if(m){
        cout<<"S"<<endl;
    }
    else
    {
          cout<<"NS"<<endl;
    }
 return 0;
}