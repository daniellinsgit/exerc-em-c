//Faça um programa em C que leia o nome, o endereço e o telefone de um cliente e ao final, imprima esses dados
//AUTOR: DANIEL LINS
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
