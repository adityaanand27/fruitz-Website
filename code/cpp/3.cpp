#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the Amount" << endl;
    int n;
    cin >> n;
    cout << "Enter your denomination" << endl;
    int m;
    cin >> m;
    switch (m)
    {
    case 200:
        cout << "You have entered to count no. of 200 notss required" << endl;
        cout << n % 200 << " "
             << "No. of 200 notes" << endl;
        break;
        case 500:
        cout << "You have entered to count no. of 500 notss required" << endl;
        cout << n % 500 << " "
             << "No. of 500 notes" << endl;
        break;
        case 50:
        cout << "You have entered to count no. of 50 notss required" << endl;
        cout << n % 50 << " "
             << "No. of 50 notes" << endl;
        break;
        case 100:
        cout << "You have entered to count no. of 100 notss required" << endl;
        cout << n % 100 << " "
             << "No. of 100 notes" << endl;
        break;

    default: cout<<"Invalid"<<endl;
        break;
    }
    return 0;
}
