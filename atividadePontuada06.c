#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
setlocale (LC_ALL, "portuguese");

int produto;


printf ("\nOp��es  |  Produto");
printf ("\n-------------------");
printf ("\n  1     |  Camiseta");
printf ("\n  2     |  Cal�a");
printf ("\n  3     |  Sapato");
printf ("\n\nInforme o produto desejado: ");
scanf ("%d", &produto);


switch (produto)
{
	case 1:
		printf ("\nCamiseta - R$67");
	break;
	
	case 2:
		printf ("\nCal�a - R$160");
	break;
	
	case 3:
	printf ("\nSapato - R$270");
	break;
	
	default:
		printf ("\nOp��o inv�lida!");
	break;	 
}


return 0;
}
