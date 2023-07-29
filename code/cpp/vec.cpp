#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a;
    a.push_back(12);
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.pop_back();
    //
    int s= a.size() << endl;
    cout << a.capacity() << endl;
    cout << a.empty() << endl;
    cout<<"Printing the ele...";
    for(int i=0;i<a.size();i++){
        cout<<i<<" ";
    }
    return 0;
}