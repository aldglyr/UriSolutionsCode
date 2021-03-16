/*
 > 1014 - Consumption

 Calculate a car's average consumption being provided the total distance traveled (in Km) and the spent fuel total (in liters).

 - Input
 The input file contains two values: one integer value X representing the total distance (in Km) and the second one is a floating point number Y  representing the spent fuel total, with a digit after the decimal point.

 - Output
 Present a value that represents the average consumption of a car with 3 digits after the decimal point, followed by the message "km/l".

 Samples Input          Samples Output
 -------------------------------------
 500                    14.286 km/l
 35.0
 -------------------------------------
 2254                   18.119 km/l
 124.4
 -------------------------------------
 4554                   9.802 km/l
 464.6
 -------------------------------------
*/

#include <iostream>

int main() {
    
    int distance{};
    float fuel{};

    std::cin >> distance;
    std::cin >> fuel;

    printf("%.3f km/l", distance / fuel);
    std::cout << std::endl;
    
    return 0;
}