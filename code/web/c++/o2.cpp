#include<iostream>
using namespace std;
class emp{
    int itemid[10];
    int itemprice[10];
    int counter;
    public: void initcounter(void){counter = 0;}
    void set(void);
    void disp(void);

};
void emp :: set(void){
    cout<<"Enter the item id"<<counter + 1<<endl;
    cin>>itemid[counter];
    cout<<"Enter the item price"<<counter + 1<<endl;
    cin>>itemprice[counter];
    counter++;
}
void emp :: disp(void){
for(int i = 0;i<counter;i++){
  cout<<"Item id is"<<itemid[i]<<" "<<"having price"<<itemprice[i]<<endl;
}
}
int main(){
    emp e1;
    e1.initcounter();
    e1.set();
   // Y.get();
    e1.set();
    e1.set();
    e1.disp();
    return 0;
}