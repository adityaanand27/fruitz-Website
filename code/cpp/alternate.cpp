#include <iostream>
using namespace std;
int i;

void print(int *arr, int n)
{
    for (i = 0; i < n; i++)
    {
        cout << "The array is " << arr[i] << endl;
    }
}
void altswap(int *arr, int n)
{
    for (i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
           swap(arr[i], arr[i + 1]);
          //
        }
    }
}

int main()
{
    int swap[6] = {2, 3, 4, 8, 9, 1};

    altswap(swap, 6);
    print(swap, 6);
    return 0;
}