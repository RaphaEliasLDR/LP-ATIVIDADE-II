#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
setlocale (LC_ALL, "portuguese");	


int idade;
char requerimento [50];

printf ("Informe sua idade: ");
scanf ("%d", &idade);

if (idade > 18){
	strcpy (requerimento, "Permitido");
}else strcpy (requerimento, "Negado");

printf ("\nAcesso %s!", requerimento);



return 0;
}
