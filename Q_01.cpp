/*Escreva um algoritmo que leia três números inteiros e positivos (A, B, C) e calcule a seguinte expressão:
    D= R + S/2, onde R= (A+B)^2 e S=(B+C)^2*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct Numeros{
    int A, B, C; 
}numeros;

int calcular_D(numeros *N){
    int R, S;
    R = pow(N->A + N->B, 2);
    S = pow(N->B + N->C, 2);
    return (R + S)/2;
}

int main(void){
    numeros N;
    int D;

    printf("\nInforme 3 numeros inteiros e positivos: \n");
    scanf("%d %d %d", &N.A, &N.B, &N.C);

    D = calcular_D(&N);

    printf("\n O Resultado final eh %d\n", D);

}