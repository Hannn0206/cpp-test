/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    
    int i = 1;               
    while (i <= 9) {          
        int j = 1; 
        while (j <= 9) {     
            cout << i << "×" << j << "=" << i * j << "\t";
            j++;
         }
         cout << endl; 
         i++;
    }
    return 0;
}
