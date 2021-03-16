/*
 > 1013 - Simple Calculate
 
 Make a program that reads 3 integer values and present the greatest one followed by the message "eh o maior". Use the following formula:

 MaiorAB = (a+b+abs(a-b))/2

 - Input
 The input file contains 3 integer values.

 - Output
 Print the greatest of these three values followed by a space and the message “eh o maior”.

  Samples Input          Samples Output
 -------------------------------------
 7 14 106                106 eh o maior
 -------------------------------------
 217 14 6                217 eh o maior
  -------------------------------------
*/

#include <iostream>

int main() {

    int a{}, b{}, c{}, m{};

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    m = (a + b + abs(a - b)) / 2;
    m = (m + c + abs(m - c)) / 2;

    std::cout << m << " eh o maior" << std::endl;

    return 0;
}