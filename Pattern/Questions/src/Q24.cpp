/**
 * Print the pattern:-

Enter the value of n : 5

    1
   22
  333
 4444
55555

*/

#include <iostream>
using namespace std;
int main(){

    int n, row = 1;
    cout << "Enter the value of n : ";
    cin >> n;
while (row<=n)
{
int space=n-row;
while (space)
{
    cout << " ";
    space--;
}
int col=1;
while (col<=row)
{
  cout << row;
  col++;
}
cout << endl;
row++;


}
}