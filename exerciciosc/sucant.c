#include <stdio.h>

int main()
{
int a;
printf("Digite um número: ");
scanf("%d", &a);
printf("Seu número é: %d\n", a);
printf("O antecessor é: %d\n", --a);
++a;
printf("O sucessor é: %d\n", ++a);

return 0;
}

