#include <iostream>
using namespace std;
int n;
int count = 0;
int main()
{
    // let n = 0000101011111
    cout << "Enter the number" << endl;
    cin >> n;
    while (n != 0)
    {
        if (n & 1 == 1)
        {
            count++;
        }
        n = n >> 1;
    }

    cout<<"The total no. of count is"<<count;
    return 0;
}