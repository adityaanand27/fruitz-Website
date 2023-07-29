// Add the elements of an array
#include <iostream>
using namespace std;

int addition(int arr[], int size)
{
    int summ = 0;
    for (int i = 0; i < size; i++)
    {
        summ = summ + arr[i];
        cout << summ;
    }
}

int main()
{

    int sum[10];
    cout << "Enter the number of elements" << endl;
    int n;
    cin >> n;
    cout << "Enter the elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> sum[i];
    }

    addition(sum, n);

    return 0;
}