/**
 * Print this Pattern:-
 
Enter the value of n : 5

1
21
321
4321
54321

* **/
#include <iostream>
using namespace std;
int main(){
    int n,i=1;
    cout << "Enter the value of n : ";
    cin>>n;
while (i<=n)
{
    int j=1;
    while(j<=i){
cout << (i-j+1);
j++;

    }
    cout << endl;
    i++;
}

} 
