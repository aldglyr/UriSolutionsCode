/*
 > 1006 - Averange 2

 Read three values (variables A, B and C), which are the three student's grades. Then, calculate the average, considering that grade A has weight 2, grade B has weight 3 and the grade C has weight 5. Consider that each grade can go from 0 to 10.0, always with one decimal place.
 
 - Input
 The input file contains 3 values of floating points with one digit after the decimal point.

 - Output
 Print the message "MEDIA" (average in Portuguese) and the student's average according to the following example, with a blank space before and after the equal signal.

 Samples Input          Samples Output
 -------------------------------------
 5.0                    MEDIA = 6.3
 6.0
 7.0
 -------------------------------------
 5.0                    MEDIA = 9.0
 10.0
 10.0
 -------------------------------------
 10.0                   MEDIA = 7.5
 10.0
 5.0
 -------------------------------------
*/

#include <iostream>

int main() {

    float A{};
    float B{};
    float C{};

    std::cin >> A;
    std::cin >> B;
    std::cin >> C;

    printf("MEDIA = %.1f",(A * 2 + B * 3 + C * 5)/10);
    std::cout << std::endl;

    return 0;
}