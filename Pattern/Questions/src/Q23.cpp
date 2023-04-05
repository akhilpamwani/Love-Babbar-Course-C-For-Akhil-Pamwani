/**
 * Print this Pattern:-
 
Enter the value of n : 5
1111
 222
  33
   4
 
 **/

#include <iostream>
using namespace std;
int main(){

    int n, row = 1;
    cout << "Enter the value of n : ";
    cin >> n;
while (row<=n)
{
    
    int space=row-1;
while (space)
{
cout << " ";
space--;

}
int star=1;
while (star<=n-row)
{
  cout << row;
  star++;
}
cout << endl;
row++;
}

}