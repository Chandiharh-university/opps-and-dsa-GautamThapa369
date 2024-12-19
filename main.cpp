/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

void passByValue(int value) {
    
    value += 10; 
    std::cout << "Inside passByValue: " << value << std::endl;
}

void passByReference(int &ref) {
    
    ref += 10; 
    std::cout << "Inside passByReference: " << ref << std::endl;
}

void staticExample() {
    static int staticCounter = 0; 
    staticCounter++;
    std::cout << "Static counter: " << staticCounter << std::endl;
}

int main() {
    int num = 5;

    std::cout << "Original num: " << num << std::endl;

   
    passByValue(num);
    std::cout << "After passByValue, num: " << num << std::endl;

    
    passByReference(num);
    std::cout << "After passByReference, num: " << num << std::endl;

    std::cout << "Demonstrating static variable:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        staticExample();
    }

    return 0;
}