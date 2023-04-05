/**
 * Print this Pattern:- 
Enter the value of n : 5
A
B B
C C C
D D D D
E E E E E
 
  **/

#include <iostream>
using namespace std;
int main(){
    int n,row=1;
    cout << "Enter the value of n : ";
    cin>>n;
while (row<=n)
{
    int col=1;
    while(col<=row){
        char ch='A'+row-1;
        cout << ch << " ";
        col++;

    }
    cout << endl;
    row++;
}


}