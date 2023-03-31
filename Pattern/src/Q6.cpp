/**
 * Print this Pattern:- 
Enter the value of n : 5

1
22
333
4444
55555


**/

#include <iostream>
using namespace std;
int main(){
    int i=1,n;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << endl;
    while (i<=n)
    {
        int j=1;
        while(j<=i){
            cout << i ;
       j++;
        }
        cout <<endl;

i++;
    }
    

} 
