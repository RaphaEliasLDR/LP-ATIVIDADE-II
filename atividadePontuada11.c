#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
setlocale (LC_ALL, "portuguese");

char codigoAcesso[50] = "cod123";
char codigo [50];

do{
printf("\n\nDigite o código de acesso: ");
scanf("%s", &codigo);

if (strcmp (codigo, codigoAcesso) ==0){
	printf("\nAcesso permitido!");
}else{
	printf ("\nAcesso negado!");
}

}while (strcmp (codigo,codigoAcesso));


return 0;
}
