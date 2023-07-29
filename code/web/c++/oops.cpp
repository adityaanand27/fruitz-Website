#include<iostream>
using namespace std;
class Aditya{
    int a,b,c;
    public: int d,e;
    void set(int a1,int b1,int c1);
    void print(){
        cout<<"The Value of is a"<<" "<<a<<endl;
        cout<<"The Value of is b"<<" "<<b<<endl;
        cout<<"The Value of is c"<<" "<<c<<endl;
        cout<<"The Value of is d"<<" "<<d<<endl;
        cout<<"The Value of is e"<<" "<<e<<endl;
    }
};
void Aditya :: set(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
}
int main(){
    Aditya me;
   // me.a = 2;
   // me.b = 3;
   // me.c = 4;
    me.d = 4;
    me.e = 4;
    me.set(1,2,3); 
    me.print();
    return 0;
}