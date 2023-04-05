/**
 * Print this Pattern:-

Enter the value of n : 5

****
***
**
*

*/
#include <iostream>
using namespace std;
int main()
{
    int n, row = 1;
    cout << "Enter the value of n : ";
    cin >> n;
    while (row <= n)
    {
        int col = 1;
        int star = n - row;

        while (star)
        {
            cout << "*";
            star--;
        }
        cout << endl;
        row++;
    }
}