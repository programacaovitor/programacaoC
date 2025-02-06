#include <stdio.h>

int main () {

int numero1, numero2; //Declarando a variavel
int soma, subtracao, multiplicacao, divisao; //Variaveis que sejam resultados de cada uma delas

    printf("Entre com o numero 1: \n");
    scanf("%d", &numero1);
    printf("Entre com o numero 2: \n");
    scanf("&d", &numero2);

    soma = numero1 + numero2; //Operação de soma

    subtracao = numero1 - numero2; //Operação de subtração

    multiplicacao = numero1 * numero2; //Operação de multiplicação

    divisao = numero1 / numero2; //Operação de divisão

    printf("A Soma é: %d\n", soma);
printf("A Subtração é: %d\n", subtracao);
printf("A Multiplicação é: %d\n", multiplicacao);
printf("A Divisão é: %d\n", divisao);

}