//Faça um programa em C que leia três números reais e calcule a média aritmética desses números. Ao final, o programa deve imprimir o resultado do cálculo com uma casa decimal.
//Autor: Daniel Lins
#include <stdio.h>

int main()
{
float a, b, c, soma, media;
printf("Informe o primeiro número: ");
scanf("%f", &a);
printf("Informe o segundo número: ");
scanf("%f", &b);
printf("Informe o terceiro número: ");
scanf("%f", &c);
soma = a+b+c, media = soma/3;
printf("A média aritmética dos três números informados é: %.1f.\n", media);
return 0;
}
