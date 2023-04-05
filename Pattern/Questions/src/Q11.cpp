/**
 * Print this Pattern:-
 
Enter the value of n : 5

A B C D E
A B C D E
A B C D E
A B C D E
A B C D E
*/

#include <iostream>
using namespace std;
int main(){
    int n,i=1;
    cout << "Enter the value of n : ";
    cin>>n;
while (i<=n)
{
  int j=1;
  while (j<=n)
  {
    char ch='A'+j-1;
    cout << ch << " ";
    j++;
  }
  cout <<endl;
  i++;
}

}