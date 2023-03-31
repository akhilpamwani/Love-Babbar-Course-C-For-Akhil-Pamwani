/**
 * Print this Pattern:-
 
Enter the value of n : 5
A
BB
CCC
DDDD
EEEEE


*/


#include <iostream>
using namespace std;
int main(){
    int n,row=1;
    cout << "Enter the value of n : ";
    cin>>n;
    while(row<=n){
        int col=1;

        while (col<=row)
        {
            char ch='A'+row-1;
            cout << ch << "";
                col++;
        }
        cout << endl;
        row++;
    }
    
    
    }