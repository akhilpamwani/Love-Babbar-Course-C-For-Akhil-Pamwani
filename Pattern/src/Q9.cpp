/**
 * Print this Pattern:- 
 * H=
 Enter the value of n : 5

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

**/


#include <iostream>
using namespace std;
int main(){
int row=1,n,value=1;
     cout << "Enter the value of n : ";
    cin >> n;
    cout << endl;
    while(row<=n){
      
      int col=row;
          
            while (col<2*row) 
            
            /* Logic Behind This Problem.
             Row ki value double hogi 
             column se kyuki colum ki value ko kam rkhna h vrna equal ho jaiga.
             
                */
            {
                cout << col << " " ;
               
                    col++;
            }
            cout << endl;
           
        
       
        row++;
    }    
} 
