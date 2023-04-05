#include <iostream>
/**
 *  Print this Pattern:- 
 
Enter the value of n : 12

1 2 3 4 5 6 7 8 9 10 11 12
1 2 3 4 5 6 7 8 9 10 11 12
1 2 3 4 5 6 7 8 9 10 11 12
1 2 3 4 5 6 7 8 9 10 11 12
1 2 3 4 5 6 7 8 9 10 11 12
1 2 3 4 5 6 7 8 9 10 11 12
1 2 3 4 5 6 7 8 9 10 11 12
1 2 3 4 5 6 7 8 9 10 11 12
1 2 3 4 5 6 7 8 9 10 11 12
1 2 3 4 5 6 7 8 9 10 11 12 
1 2 3 4 5 6 7 8 9 10 11 12
1 2 3 4 5 6 7 8 9 10 11 12


*/

using namespace std;
int main()
{
    cout << "Enter the value of n : ";
    int n, i = 1 ;
    cin >> n;
    cout << endl;
    while (i <= n)
    {
        int j=1;
        while (j <=n)
        {
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}