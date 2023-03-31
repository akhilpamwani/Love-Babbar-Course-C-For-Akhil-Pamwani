//  Sum of n numbers from 1
#include <iostream>
using namespace std;

int main(){
int n,sum=0;
cout << "Enter the value of n : ";
cin >> n;
int i=1;
while (i<=n) {
sum=i+sum;
i++;
}
cout << "Sum of n numbers from 1 = " << sum << endl;

}