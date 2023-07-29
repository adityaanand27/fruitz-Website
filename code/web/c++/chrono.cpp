#include <iostream>
#include <chrono>
using namespace std::chrono;
using namespace std;
void printarray(int arr[],int n){
    for(int m = 0;m<n-1;m++){
        cout<<arr[m]<<" ";
    }
}
void swapper(int arr[],int n){
for(int i=0;i<n-1;i++){
    int minIndex=i;
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[minIndex]){
            minIndex=j;
        }
    }
    swap(arr[minIndex],arr[i]);
}
}
int main(){
    int s[6]={4,3,7,9,1,4};
    auto start = high_resolution_clock::now();
    swapper(s,6);
    cout<<"The Sorted Array are :"<<endl;
    printarray(s,6);
    auto stop = high_resolution_clock::now();
   auto duration = duration_cast<microseconds>(stop - start);
   cout << "\nTime taken by function : "<< duration.count() << " microseconds";
    return 0;
}