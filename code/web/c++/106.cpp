//reverse a string
#include<iostream>
using namespace std;
void rev(string str,int i,int j){
    if(i>j){
        return ;
    }
    swap(str[i],str[j]);
    i++;
    j--;

    rev(str,i,j);
   // cout<<mn<<" ";
    
    cout<<str<<endl;
    //break;
}
int main()
{
string a = "aditya";
int i =0;
int j =a.length()-1;
//void x =rev(a,i,j);
rev(a,i,j);
//cout<<a;
return 0;
}