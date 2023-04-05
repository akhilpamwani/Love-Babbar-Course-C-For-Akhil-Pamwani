/**
 * Print this Pattern:-
 
Enter the value of n : 4

      1
    2 3
  4 5 6
7 8 9 10

*/

#include <iostream>
using namespace std;
int main(){

    int n, row = 1,num = 1;
    cout << "Enter the value of n : ";
    cin >> n;
while (row<=n)
{
    int space=1;
    while (space<=n-row)
    {
cout << "  ";
space++;
    }
    
    int col=1;
    while (col<=row)
    {
            cout << num << " ";
            num++;
            col++;
    }
    cout << endl;
    row++;
    
}

}
