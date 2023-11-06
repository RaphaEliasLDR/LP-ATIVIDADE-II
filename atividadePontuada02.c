#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
setlocale (LC_ALL, "portuguese");

float valor;
char semana[100];



printf ("Informe o dia da Semana: ");
scanf ("%s", semana);

printf ("Informe o valor da compra: ");
scanf ("%f", &valor);


if ((semana == "domingo" || semana == "sabado") && (valor > 100)){
	printf ("\nDesconto de 15 liberado!");
	printf ("\nValor s/desconto: %.2f", valor);
	printf ("\nValor do desconto: %.2f", valor * 0.15);
}else{
	printf ("\nDesconto de 10 liberado!");
	printf ("\nValor s/desconto: %.2f", valor);
	printf ("\nValor do desconto: %.2f", valor * 0.10);
}


return 0;
}
