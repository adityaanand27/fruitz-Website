#include <iostream>
using namespace std;
// function=>>row sum
void rowSum(int arr[][2], int row, int col)
{
    for (int row = 0; row < 2; row++)
    {
       int sum = 0;
        for (int col = 0; col < 2; col++)
        {
            sum = sum + arr[row][col];
        }
    }
    cout<<"The sum is "<<sum<<endl;
}
void colSum(int arr[][2],int row ,int col){
    for (int col = 0; col < 2; col++)
    {
        int columnSum = 0;
        for (int row = 0; row < 2; row++)
        {
            columnSum= columnSum + a[row][col]; 
        }
        
    }
    cout<<"The column wise sum is "<< columnSum<<endl;
    
}
int main()
{
    int x[2][2];
//int colloc = -1;
    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 2; col++)
        {
            cin >> x[row][col];
        }
       // calloc = calloc++;
    }
    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 2; col++)
        {
            cout >> x[row][col];
        }
    }
    // fxn for linding row sum
   int qa= rowSum( x,2,2);
   int az= colSum(x,2,2);
   cout<<"The row Sum is "<<qa<<endl;
   cout<<"The col Sum is "<<az<<endl;
    return 0;
}