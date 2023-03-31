

#include <iostream>
using namespace std;
int main(){
    int n,i=1,count=1;
    cout << "Enter the value of n : ";
    cin>>n;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            char ch= 'A'+i+j+1-2;
            cout << ch;
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
    
    
    }