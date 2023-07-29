#include<iostream>
#include<array>
using namespace std;

int main(){
    array<int,4> a={1,2,3,4};
    int size=a.size();
    for (int  i = 0; i < size; i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"The last element of array is =>"<<a.back()<<endl;
    cout<<"The firsy element of array is =>"<<a.front()<<endl;
    cout<<"array is empty or not=>"<<a.empty()<<endl;
    cout<<"array element at i-th position =>"<<a.at(2)<<endl;
    
}