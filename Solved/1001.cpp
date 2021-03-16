/*
 > 1001 - Extremely Basic

 Read 2 variables, named A and B and make the sum of these two variables, assigning its result to the variable X. 

 Print X as shown below. Print endline after the result otherwise you will get “Presentation Error”.

 - Input
 The input file will contain 2 integer numbers.

 - Output
 Print the letter X (uppercase) with a blank space before and after the equal signal followed by the value of X, according to the following example.

 Obs.: don't forget the endline after all.

 Samples Input          Samples Output
 -------------------------------------
 10                     X = 19
 9
 -------------------------------------
 -10                    X = -6
 4
 -------------------------------------
 15                     X = 8
 -7
 -------------------------------------
*/

#include <iostream>

int main() {

    int A {};
    int B {};

    std::cin >> A;
    std::cin >> B;

    std::cout << "X = " << A + B << std::endl;

    return 0;
}