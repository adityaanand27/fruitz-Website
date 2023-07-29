#include<iostream>
using namespace std;

bool search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int SearchMe[7]={1,2,3,4,5,6,7};
    cout<<"Enter the element you are searching::"<<endl;
    int n;
    cin>>n;

    bool found=search(SearchMe,7,n);
    if(found){
        cout<<"Key found"<<endl;
    }
    else{
        cout<<"Key absent";
    }
    return 0;
}