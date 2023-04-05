/**
 * Print this Pattern:-
Enter the value of n : 5

1 
2 3 
3 4 5 
4 5 6 7 
5 6 7 8 9 
 
 * **/
#include <iostream>
using namespace std;
int main(){
     int row=1,n;
     cout << "Enter the value of n : ";
    cin >> n;
    cout << endl;
    while (row<=n)
    {
        int col=1;
        int value=row;
        while (col<=row)
        {
            cout << value << " ";
            value++;
            col++;
        }
        cout << endl;
        row++;
    }
    
} 