/**
 *  Print this Pattern:- 
 
Enter the value of n:6

 1  2  3  4  5  6
 7  8  9  10  11  12
 13  14  15  16  17  18
 19  20  21  22  23  24
 25  26  27  28  29  30 
 31  32  33  34  35  36

 **/

#include <iostream>
using namespace std;
int main(){
    int i=1,n;
    cout << "Enter the value of n:";
    cin >> n;
    cout << endl;
    int count=1;

    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout <<" " << count << " ";
            count++;
            j++;

        }
        cout << endl;
        i++;
        
    }
    
    
} 
