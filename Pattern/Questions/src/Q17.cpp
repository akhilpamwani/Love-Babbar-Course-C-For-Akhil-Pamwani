/*

 * Print this Pattern:-
Enter the value of n : 5
A
BC
DEF
GHIJ
KLMNO

*/


#include <iostream>
using namespace std;
int main(){
    int n,row=1,count=1;
    cout << "Enter the value of n : ";
    cin>>n;
    while (row<=n)
    {
        int col=1;
        while (col<=row)
        {
            char ch='A'+count-1;
            cout << ch;
            count++;
            col++;


        }
        cout << endl;
        row++;
        
    }
    
    
    }