#include <iostream>
using namespace std;
int square(int n)
{
    int s = 0;
    int e = n;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        int squareit = mid * mid;
        if (squareit == n)
        {
            return mid;
        }
        if (squareit > n)
        {
            e = mid - 1;
        }
        else
        {
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

double morepresion(int n, int presision, int temp)
{
    double factor = 1;
    double ans = temp;
    for (int i = 0; i < presision; i++)
    {
            factor = factor / 10;
            for (double j = ans; j*j<n; j=j+factor)
            {
            ans = j;
            }
    }
    return ans;
}
int main()
{
    cout << "Enter the value of n" << endl;
    int n;
    cin >> n;
int temp=square(n);
    double mysq = morepresion(n,3,temp);
    cout << "The square root of the given number is"
         << " " << mysq << endl;
    return 0;
}