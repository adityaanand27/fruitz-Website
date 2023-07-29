// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main()
{
    int product = 1;
    int sum = 0;
    int n;
    cout << "Enter the value of n" << endl;

    cin >> n;

    while (n != 0)
    {
        int digit = n % 10;
        product = product * digit;
        sum = sum + digit;

        n = n / 10;
    }
    int answer = product - sum;
    cout<<answer<<endl;
    return 0;
}