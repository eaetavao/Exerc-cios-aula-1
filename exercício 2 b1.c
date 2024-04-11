/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int main() {
    float numero1, numero2, numero3;

    // Solicita que o usuário insira os três valores
    printf("Digite o primeiro valor: ");
    scanf("%f", &numero1);
    
    printf("Digite o segundo valor: ");
    scanf("%f", &numero2);
    
    printf("Digite o terceiro valor: ");
    scanf("%f", &numero3);

    // Verifica qual é o maior valor entre os três
    if (numero1 >= numero2 && numero1 >= numero3) {
        printf("O maior valor é: %.2f\n", numero1);
    } else if (numero2 >= numero1 && numero2 >= numero3) {
        printf("O maior valor é: %.2f\n", numero2);
    } else {
        printf("O maior valor é: %.2f\n", numero3);
    }

    return 0;
}
