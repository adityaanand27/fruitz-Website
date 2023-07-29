#include<iostream>
using namespace std;

void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
void reverse(int arr[],int size){
    int s=0;
    int e=size-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}
int main(){
    int a[6]={1,2,3,4,5,6};
    int b[5]={8,5,9,3,5};

    reverse(a,6);
    print(a,6);
    cout<<endl;
    reverse(b,5);
    print(b,5);

    return 0;
}