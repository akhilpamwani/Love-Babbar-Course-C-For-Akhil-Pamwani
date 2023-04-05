/*

* Print this Pattern:-
Enter the value of n : 5
A B C D E
F G H I J
K L M N O
P Q R S T
U V W X Y
*/
#include <iostream>
using namespace std;
int main(){
    int n,i=1,count=1;
    cout << "Enter the value of n : ";
    cin>>n;
    while (i<=n)
    {int j=1;
   
        while (j<=n)
        {
            char ch='A'+count-1;
            cout << ch << " ";
            count ++;
            j++;
        }
        cout << endl;
        i++;
    }
}