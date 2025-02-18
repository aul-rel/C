/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int idade = 30;
    int aniversario = 15;
    float altura = 1.75;
    double peso = 70.5;
    float nota = 7.8;
    char inicial = 'A';
    
    printf("Hello World\n");//Comentário, até o final da linha
    printf("Idade: %d anos\n", idade);//%d - para representar numero inteiro
    printf("Altura: %.2f metros\n", altura);//%f - para representar numero decimal
    printf("Peso: %.1f kg\n", peso);
    printf("Nota: %.2f\n", nota);
    printf("Inicial do nome: %c\n", inicial);

    return 0;
}
