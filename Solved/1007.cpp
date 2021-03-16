/*
 > 1007 - Difference
 
 Read four integer values named A, B, C and D. Calculate and print the difference of product A and B by the product of C and D (A * B - C * D).

 - Input
 The input file contains 4 integer values.
 
 - Output
 Print DIFERENCA (DIFFERENCE in Portuguese) with all the capital letters, according to the following example, with a blank space before and after the equal signal.

  Samples Input          Samples Output
 -------------------------------------
 5                       DIFERENCA = -26
 6
 7
 8
 -------------------------------------
 0                       DIFERENCA = -56
 0
 7
 8
 -------------------------------------
 5                       DIFERENCA = 86
 6
 -7
 8
 -------------------------------------
*/

#include <iostream>

int main() {
    
    int A{};
    int B{};
    int C{};
    int D{};

    std::cin >> A;
    std::cin >> B;
    std::cin >> C;
    std::cin >> D;

    std::cout << "DIFERENCA = " << A * B - C * D << std::endl;
    
    return 0;
}