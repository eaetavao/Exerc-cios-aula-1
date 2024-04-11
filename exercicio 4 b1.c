/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    float lado7, lado8, lado9;

    
    printf("Digite o comprimento do primeiro lado: ");
    scanf("%f", &lado7);
    
    printf("Digite o comprimento do segundo lado: ");
    scanf("%f", &lado8);
    
    printf("Digite o comprimento do terceiro lado: ");
    scanf("%f", &lado9);

    
    if (lado7 + lado8 > lado9 && lado7 + lado9 > lado8 && lado8 + lado9 > lado7) {
        
        if (lado7 == lado8 && lado7 == lado9) {
            printf("É um triângulo equilátero.\n");
        } else if (lado7 == lado8 || lado7 == lado9 || lado8 == lado9) {
            printf("É um triângulo isósceles.\n");
        } else {
            printf("É um triângulo escaleno.\n");
        }
    } else {
        printf("As medidas fornecidas não formam um triângulo.\n");
    }

    return 0;
}