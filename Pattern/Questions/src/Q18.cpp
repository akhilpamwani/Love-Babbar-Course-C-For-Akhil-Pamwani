/**
 * Print this Pattern:- 
Enter the value of n : 4
D
D C
D C B
D C B A
 * */
#include <iostream>
using namespace std;
int main(){
    int n,i=1;
    cout << "Enter the value of n : ";
    cin>>n;
    while (i<=n)
    {
        int j=1;
        while (j<=i)
        {
            char ch='A'+n-j;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    
}