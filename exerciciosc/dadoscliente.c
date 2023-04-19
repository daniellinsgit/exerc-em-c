// Faça um programa em C que imprima seu nome
// Autoria: Daniel Lins
#include <stdio.h>

int main()
{
char nome[50], endereco[50], tel[20];
printf("Insira seu nome: ");
fgets(nome, sizeof(nome), stdin);
printf("Insira seu endereço: ");
fgets(endereco, sizeof(endereco), stdin);
printf("Insira seu telefone: ");
fgets(tel, sizeof(tel), stdin);
puts(nome);
puts(endereco);
puts(tel);
return 0;
}
