/*
 > 1018 - Banknotes

 In this problem you have to read an integer value and calculate the smallest possible number of banknotes in which the value may be decomposed. The possible banknotes are 100, 50, 20, 10, 5, 2 e 1. Print the read value and the list of banknotes.

 - Input
 The input file contains an integer value N (0 < N < 1000000).

 - Output
 Print the read number and the minimum quantity of each necessary banknotes in Portuguese language, as the given example. Do not forget to print the end of line after each line, otherwise you will receive “Presentation Error”.

 Samples Input          Samples Output
 -------------------------------------
 576                    576
                        5 nota(s) de R$ 100,00
                        1 nota(s) de R$ 50,00
                        1 nota(s) de R$ 20,00
                        0 nota(s) de R$ 10,00
                        1 nota(s) de R$ 5,00
                        0 nota(s) de R$ 2,00
                        1 nota(s) de R$ 1,00
 -------------------------------------
 11257                  11257
                        112 nota(s) de R$ 100,00
                        1 nota(s) de R$ 50,00
                        0 nota(s) de R$ 20,00
                        0 nota(s) de R$ 10,00
                        1 nota(s) de R$ 5,00
                        1 nota(s) de R$ 2,00
                        0 nota(s) de R$ 1,00
 -------------------------------------
 503                    503
                        5 nota(s) de R$ 100,00
                        0 nota(s) de R$ 50,00
                        0 nota(s) de R$ 20,00
                        0 nota(s) de R$ 10,00
                        0 nota(s) de R$ 5,00
                        1 nota(s) de R$ 2,00
                        1 nota(s) de R$ 1,00
 -------------------------------------
*/

#include <iostream>

int main(){
    int numero{ 0 }, notas{ 0 }, cedula{ 0 };

    std::cin >> numero;

    std::cout << numero << std::endl;

    for (int i = 1; i <= 7 ; i++)
    {
        if (i == 1)
        {
            cedula = 100;
        }
        if (i == 2)
        {
            cedula = 50;
        }
        if (i == 3)
        {
            cedula = 20;
        }
        if (i == 4)
        {
            cedula = 10;
        }
        if (i == 5)
        {
            cedula = 5;
        }
        if (i == 6)
        {
            cedula = 2;
        }
        if (i == 7)
        {
            cedula = 1;
        }

        notas = numero / cedula;
        numero = numero % cedula;

        std::cout << notas << " nota(s) de R$ " << cedula << ",00" << std::endl;
    }

    return 0;
}
