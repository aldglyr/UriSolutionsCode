/*
 > 1020 - Age in Days

 Read an integer value corresponding to a person's age (in days) and print it in years, months and days, followed by its
 respective message “ano(s)”, “mes(es)”, “dia(s)”.

 Note: only to facilitate the calculation, consider the whole year with 365 days and 30 days every month. In the cases 
 of test there will never be a situation that allows 12 months and some days, like 360, 363 or 364. This is just an 
 exercise for the purpose of testing simple mathematical reasoning.

 - Input
 The input file contains 1 integer value.

 - Output
 Print the output, like the following example.

 Samples Input          Samples Output
 -------------------------------------
 400                    1 ano(s)
                        1 mes(es)
                        5 dia(s)
 -------------------------------------
 800                    2 ano(s)
                        2 mes(es)
                        10 dia(s)
 -------------------------------------
 30                     0 ano(s)
                        1 mes(es)
                        0 dia(s)
 -------------------------------------
*/

#include <iostream>

int main() {

    int dias{0},
        meses{0},
        anos{0},
        diasEntrada{0},
        diasDiferenca{0};

    std::cin >> diasEntrada;

    std::cout << diasEntrada/365 << " ano(s)" << std::endl;
    diasDiferenca = diasEntrada%365;
    
    std::cout << diasDiferenca/30 << " mes(es)" << std::endl;
    diasDiferenca = diasDiferenca%30;
    
    std::cout << diasDiferenca << " dia(s)" << std::endl;

    return 0;
}
