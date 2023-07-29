#include<iostream>
using namespace std;

//finding sqrt using binary search of time complexity O(log n)
int binarySearch(int n){
    int s=0;
    int e=n-1;
    int mid = s + (e-s)/2 ;
    int ans ;
    int square = mid * mid ;

    while(s<=e){
        if(square == n){
            return mid;
        }
        if(square < n){
          ans = mid;
          s = mid + 1;
        }
        else{
            e= mid - 1;
        }
        mid = s + (e-s)/2 ;
    }
    return ans;
}
int main(){
    //int n=25;
    cout<<binarySearch(25);
   // return binarySearch(25);
}