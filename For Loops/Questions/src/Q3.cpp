#include <iostream>
using namespace std;
int main(){
    int n;
    cout << endl;
    cout << "Enter the value of n : " ;
    cin >> n;
    cout << endl;
    bool isPrime=1;
for (int i = 2; i<n; i++)
{
    if (n%i==0)
    {
      isPrime=0;
      break;
    }
    
}
if (isPrime==0)
{
    cout << n << " Is Not Prime Number";
    cout << endl;
}
else
{ 
     cout << n << " Is A Prime Number";
    cout << endl;
}

}