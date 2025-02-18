/*

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*/
#include <stdio.h>

int main()
{
    int idade = 30;
    // int idade2 = 15;
    float altura = 1.75;
    double peso = 70.5;
    char inicial = 'A';
    float nota = 7.86;
    
    //printf("Hello World\n");//Comentário, até o final da linha
    printf("Idade: %d anos\n", idade);//%d - para representar numero inteiro
    printf("Altura: %.2f metros\n", altura);//%f - para representar numero decimal, ponto seguido de numero representa o numero de casas decimais ou critério de arredondamento
    printf("Peso: %.1f kg\n", peso);
    printf("Inicial do nome: %c\n", inicial);//%c - para representar caractere
    nota = 8.5;//altera valor da variavel "nota"
    printf("Nota: %.1f\n", nota);
    printf("\nVocê tem %d anos e sua nota foi %.1f\n",idade,nota);

    return 0;
}
