// cheaking wheter a number is power of 2 or not
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    cout << "Enter the number" << endl;
    int n;
    cin >> n;

    for (int i = 0; i <= 30; i++)
    {
        int power = pow(2, i);
        if (power == n)
        {
          cout<<"T"<<endl;
        }
       
    }
    //string b=cout<<"True"<<endl;
    //string a=cout<<"False"<<endl;
    return 0;
}
