#include<iostream>
using namespace std;
void alternate1(int arr[],int size){
    for(int i=0;i+1<size;i=i+2){
        swap(arr[i],arr[i+1]);
    }
}
void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
//Swap elements
  /*int temp = arr[i+1];
  arr[i+1]=arr[i];
  arr[i]=temp;
               */
int main(){

    int arr1[8]={1,2,3,4,5,6,7,8};
    alternate1(arr1,8);
    printarray(arr1,8);
}