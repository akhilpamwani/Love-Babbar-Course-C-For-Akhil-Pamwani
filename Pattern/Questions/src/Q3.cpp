/**
 *  Print this Pattern:- 
 
Enter the value of n : 5 

5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1 

 **/

#include <iostream>
using namespace std;
int main(){
     cout << "Enter the value of n : ";
     int n,i=1;
     cin >> n;
     cout << endl;
     while(i<=n){
        int j=1;
        while(j<=n){
            int k=n-j+1;
            cout << k << " ";
            j++;
        }
        cout << endl;
        i++;
     }

} 