//quick sort
#include<iostream>
using namespace std;
int partition(int arr[],int s,int e){
    int pivot = arr[s];
    int cnt = 0;
    for(int i = s+1;i<=e;i++){
        if(arr[i]<pivot){
            cnt++;
        }
    }
    int pin = s+cnt;
    swap(arr[pin],arr[s]);

    int i=s,j=e;
    while(i<pin && j>pin){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
       if(i<pin && j>pin){
        swap(arr[i++],arr[j--]);}
    }
    return pin;
}

void quicksort(int arr[],int s,int e){

    int mid = s+e/2;

    int p = partition(arr,s,e);

    quicksort(arr,s,p-1);
    quicksort(arr,p+1,e);
    

}
int main()
{
    int arr[10] = {2,4,1,6,9,9,9,9,9,9};
    int n = 10;

    quicksort(arr, 0, n-1);

    for(int i=0; i<n; i++) 
    {
        cout << arr[i] << " ";
    } cout << endl;

 return 0;
}