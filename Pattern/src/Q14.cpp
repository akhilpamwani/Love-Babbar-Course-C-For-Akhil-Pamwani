/**
 * Print this Pattern:-
 

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
        while(j<=n){
            char ch='A'+i+j-2;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    
    
    
    
    }