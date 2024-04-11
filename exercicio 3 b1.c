/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


#include <stdio.h>

int main() {
    float celsius, fahrenheit;

  
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

   
    fahrenheit = celsius * (9.0 / 5.0) + 32.0;

    printf("A temperatura em Fahrenheit é: %.2f\n", fahrenheit);

    return 0;
}