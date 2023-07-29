#include <iostream>
using namespace std;
int binaryS(int *arr, int size, int key)
{
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        if (key < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int binary[7] = {2, 4, 6, 8, 10, 12, 14};

   // int evenindex = binaryS(binary, 7, 12);
    cout << "The index of digit 12 is " << binaryS(binary, 7, 12) << endl;
    return 0;
}