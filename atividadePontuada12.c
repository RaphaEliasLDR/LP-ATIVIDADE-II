#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
setlocale (LC_ALL, "portuguese");

int i;
int soma = 0;
float media;
int nota;

for (i = 0; i < 5; i++){
	printf ("Digite a %dº nota: ", i+1);
	scanf ("%d", &nota);
	soma = soma + nota;
}

media = soma / i;

printf ("\nMédia: %.2f", media);


return 0;
}
