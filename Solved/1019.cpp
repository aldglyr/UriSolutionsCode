/*
 > 1019 - Time Conversion

 Read an integer value, which is the duration in seconds of a certain event in a factory, and inform it expressed in hours:minutes:seconds.

 - Input
 The input file contains an integer N.

 - Output
 Print the read time in the input file (seconds) converted in hours:minutes:seconds like the following example.

 Samples Input          Samples Output
 -------------------------------------
 556                    0:9:16
 -------------------------------------
 1                      0:0:1
 -------------------------------------
 140153                 38:55:53
 -------------------------------------
*/

#include <iostream>

int main(){
    int tempoInicial{ 0 }, constConversao{ 3600 }, tempo{ 0 };
    std::cin >> tempoInicial;
    for (int i = 1; i <= 3; i++){
        tempo = tempoInicial / constConversao;
        tempoInicial = tempoInicial % constConversao;
        constConversao /= 60;
        std::cout << tempo;
        if (i != 3) {
            std::cout << ":";
        }
    }
    std::cout << std::endl;
    return 0;
}
