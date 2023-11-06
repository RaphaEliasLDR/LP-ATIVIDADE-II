#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
setlocale (LC_ALL, "portuguese");

int i;
int numero;
int pares = 0;
int impares = 0;
int somaPar = 0;
int somaImpar = 0;
float mediaPar;
float mediaImpar;


for (i = 0; i < 5; i++){
	printf ("Informe o %dº número: ", i+1);
	scanf ("%d", &numero);
		if (numero % 2 == 0){
			pares++;
			somaPar += numero;
		}else{
			impares++;
			somaImpar += numero;
		}
}

mediaPar = somaPar / pares;
mediaImpar = somaImpar / impares;

printf ("\nQuantidade de pares: %d", pares);
printf ("\nQuanidade de ímpares: %d", impares);
printf ("\nMédia dos números pares: %.2f", mediaPar);
printf ("\nMédia dos números ímpares: %.2f", mediaImpar);


return 0;
}
