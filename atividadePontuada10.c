#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
setlocale (LC_ALL, "portuguese");

char operacao;
int primeiroNumero;
int segundoNumero;
int resultado;


printf ("\nDigite o primeiro n�mero: ");
scanf ("%d", &primeiroNumero);

fflush (stdin);
printf ("\nInforme a opera��o matem�tica: ");
scanf ("%c", &operacao);

printf ("\nDigite o segundo n�mero: ");
scanf ("%d", &segundoNumero);


switch (operacao)
{
	case '+':
		resultado = primeiroNumero + segundoNumero;
	break;
	
		case '-':
		resultado = primeiroNumero - segundoNumero;
	break;
	
		case '*':
		resultado = primeiroNumero * segundoNumero;
	break;
	
		case '/':
		resultado = primeiroNumero / segundoNumero;
	break;
	
	default:
		printf ("\nOp��o Inv�lida!");
	break;	 
}


printf ("\nResultado: %d", resultado);




return 0;
}
