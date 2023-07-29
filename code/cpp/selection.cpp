// selection sort
#include <iostream>
using namespace std;
// int minIndex;
// int n;
void selection(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}
int main()
{

    int a[5] = {2, 4, 8, 9, 5};

    cout << "the elements are"<<selection(a, 5);
    return 0;
}