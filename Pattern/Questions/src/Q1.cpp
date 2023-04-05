/**
 * Print this Pattern:- 

Enter the value of n : 3

* * *
* * *
* * *

*/

#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the value of n : ";
    int n, i = 0;
    cin >> n;
    cout << endl;
    while (i < n)
    {
        int j = 0;
        while (j < n)
        {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }
}