/*
 > 1021 - Banknotes and Coins

 Read a value of floating point with two decimal places. This represents a monetary value. After this, calculate the smallest possible number of notes and coins on which the value can be decomposed. The considered notes are of 100, 50, 20, 10, 5, 2. The possible coins are of 1, 0.50, 0.25, 0.10, 0.05 and 0.01. Print the message “NOTAS:” followed by the list of notes and the message “MOEDAS:” followed by the list of coins.

 - Input
 The input file contains a value of floating point N (0 ≤ N ≤ 1000000.00).

 - Output
 Print the minimum quantity of banknotes and coins necessary to change the initial value, as the given example.

 Samples Input          Samples Output
 -------------------------------------
  576.73                NOTAS:
                        5 nota(s) de R$ 100.00
                        1 nota(s) de R$ 50.00
                        1 nota(s) de R$ 20.00
                        0 nota(s) de R$ 10.00
                        1 nota(s) de R$ 5.00
                        0 nota(s) de R$ 2.00
                        MOEDAS:
                        1 moeda(s) de R$ 1.00
                        1 moeda(s) de R$ 0.50
                        0 moeda(s) de R$ 0.25
                        2 moeda(s) de R$ 0.10
                        0 moeda(s) de R$ 0.05
                        3 moeda(s) de R$ 0.01
 -------------------------------------
 4.00                   NOTAS:
                        0 nota(s) de R$ 100.00
                        0 nota(s) de R$ 50.00
                        0 nota(s) de R$ 20.00
                        0 nota(s) de R$ 10.00
                        0 nota(s) de R$ 5.00
                        2 nota(s) de R$ 2.00
                        MOEDAS:
                        0 moeda(s) de R$ 1.00
                        0 moeda(s) de R$ 0.50
                        0 moeda(s) de R$ 0.25
                        0 moeda(s) de R$ 0.10
                        0 moeda(s) de R$ 0.05
                        0 moeda(s) de R$ 0.01
 -------------------------------------
  91.01                 NOTAS:
                        0 nota(s) de R$ 100.00
                        1 nota(s) de R$ 50.00
                        2 nota(s) de R$ 20.00
                        0 nota(s) de R$ 10.00
                        0 nota(s) de R$ 5.00
                        0 nota(s) de R$ 2.00
                        MOEDAS:
                        1 moeda(s) de R$ 1.00
                        0 moeda(s) de R$ 0.50
                        0 moeda(s) de R$ 0.25
                        0 moeda(s) de R$ 0.10
                        0 moeda(s) de R$ 0.05
                        1 moeda(s) de R$ 0.01
 -------------------------------------
*/

#include <iostream>
#include <cmath>

int main() {

    float notasMoedas[12]{ 100.00, 50.00, 20.00, 10.00, 5.00, 2.00, 1.00, 0.50, 0.25, 0.10, 0.05, 0.01 };
    float valorEntrada{ 0 }, resto{ 0 };

    std::cin >> valorEntrada;
    resto = valorEntrada;

    for (int i{ 0 }; i < 12; i++) {
        if (notasMoedas[i] == 100.00) {
            std::cout << "NOTAS:";
        }

        if (notasMoedas[i] == 1.00) {
            std::cout << "\nMOEDAS:";
        }

        if (notasMoedas[i] > 1) {
            printf("\n%d nota(s) de R$ %.2f", int(resto / notasMoedas[i]), notasMoedas[i]);
        }else {
            printf("\n%d moeda(s) de R$ %.2f", int(resto / notasMoedas[i]), notasMoedas[i]);
        }

        resto = std::fmod(resto, notasMoedas[i]);
    }
    return 0;
}
