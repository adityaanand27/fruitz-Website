#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the Number"<<endl;
    int n;
   
    cin >> n;
    int i = 2;
    while (i < n)
    {
        if (n % i == 0)
        {
            cout << "Number is not prime" << endl;
        }
        else
        {
            cout << "Number is prime";
        }

        i = i + 1;
    }

    return 0;
}

