#include<iostream>
using namespace std;

bool linear(int arr[],int size,int key){
    //base 
    if(size == 0){
        return 0 ;
    }
    //processing
    if(arr[0]==key){
        return 1;
    }
    //recursive function
    bool ans = linear(arr+1,size-1,key);
    return ans;
}
int main()
{
    int arr[7]={1,4,5,7,3,5,8};
    int size =7;
    int key = 65;
    int m=linear(arr,size,key);
    if(m){
        cout<<"Key P"<<endl;
    }
    else
    {
          cout<<"Key A"<<endl;
    }
 return 0;
}