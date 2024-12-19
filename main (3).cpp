/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;


int fibHelper(int n, int prev2, int prev1) {
  
    
    if (n == 0) {
        return prev2;
    }
  
    
    if (n == 1) {


        return prev1;
    }
    
    
    return fibHelper(n - 1, prev1, prev2 + prev1);
}

int fib(int n) {

     
    return fibHelper(n, 0, 1);
}

int main() {
    int n = 5;

    
    cout << fib(n);
    return 0;
}