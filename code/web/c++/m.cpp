#include<iostream>
using namespace std;
int main()
{
    char ch[7] = "aditya";
    char *c = &ch[0];
    cout<<&c<<endl;
    cout<<*c;
     return 0;
}