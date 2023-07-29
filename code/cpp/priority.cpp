#include<iostream>
#include<queue>
using namespace std;
 
int main(){
   // priority_queue<int>maxi;
    priority_queue< int ,vector<int>, greater<int> >mini;

    

   // maxi.push(1);
   // maxi.push(2);
   // maxi.push(3);
   // maxi.push(4);
   // maxi.push(5);
    mini.push(5);
    mini.push(4);
    mini.push(3);
    mini.push(2);
    mini.push(1);
   //int n=maxi.size();
   int m=mini.size();
   //int mini_Erase
  // cout<<n;
   cout<<m;
    /*for (int  i = 0; i < n; i++)
    {
        cout<<"The element of priority in sorted order in incresing order is => "<<maxi.top()<<endl;
        maxi.pop();
        cout<<endl;
    }*/
     for (int  i = 0; i < m; i++)
    {
        cout<<"The element of priority in sorted order in decreasing order is => "<<mini.top()<<endl;
        mini.pop();
        cout<<endl;
    }
    
    return 0;
} 