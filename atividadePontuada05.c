#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
setlocale (LC_ALL, "portuguese");


int idioma;



printf ("\nOp��es  |  Idioma");
printf ("\n___________________");
printf ("\n  1     |  Ingl�s");
printf ("\n  2     |  Espanhol");
printf ("\n  3     |  Fran��s");
printf ("\n\nInforme o idioma: ");
scanf ("%d", &idioma);


switch (idioma)
{
case 1:
	printf ("\nWelcome!!");
	break;
case 2:
	printf ("\nSea bienvenido!!");
	break;
case 3:
	printf ("\nAccueillir!!");
	break;
default:
	printf ("\nOp��o inv�lida.");
	break;
}


return 0;
}
