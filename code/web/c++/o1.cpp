#include<iostream>
#include<string>
using namespace std;
class binary {
    private : string s;
    public : 
    void read();
    void cheak(void);
    void com(void);
    void disp(void);

};

void binary :: read(){
    cout<<"Enter the binary number : "<<endl;
    cin>>s;
   
}

void binary :: cheak(void){
    for(int i =0; i<s.length();i++){
        if(s.at(i)!= '0'  && s.at(i)!= '1'){
            cout<<"Incorrect binary format"<<endl;
           exit(0);
        }
        else{
       cout<<"Correct"<<" "<<endl;
       break;
        }
    }
    //cout<<"Format Cheak : Correct Format"<<endl;
}

void binary :: com(void){
    for(int i=0;i<s.length();i++){
        if(s.at(i) == '0'){
            s.at(i) = '1';
        }
        else{
            s.at(i) = '0';
        }
    }
}

void binary :: disp(void){
    cout<<"Displaying Complemented binary number : ";
    for(int i=0;i<s.length();i++){
        cout<<s.at(i)<<" ";
    }
}

int main(){
    binary num;
    num.read();
    num.cheak();
    num.com();
    num.disp();
    return 0;
}