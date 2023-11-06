#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
setlocale (LC_ALL, "portuguese");


int primeiroNumero;
int segundoNumero;


printf ("Digite o primeiro número: ");
scanf ("%d", &primeiroNumero); 

printf ("Digite o segundo número: ");
scanf ("%d", &segundoNumero); 

if (primeiroNumero > segundoNumero){
	printf("%\n%d é maior que %d", primeiroNumero, segundoNumero);
}else{
	printf ("%\n%d é maior que %d", segundoNumero, primeiroNumero);
}


return 0;
}
