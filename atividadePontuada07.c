#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
setlocale (LC_ALL, "portuguese");

int menu;


printf ("\nMenu    |  Op��es");
printf ("\n-------------------------");
printf ("\n  [1]   |  Novo Jogo");
printf ("\n  [2]   |  Carregar Jogo");
printf ("\n  [3]   |  Configura��es");

printf ("\n\nInforme a op��o: ");
scanf ("%d", &menu);


switch (menu)
{
	case 1:
		printf ("\nCome�ando uma nova campanha...");
	break;
	
	case 2: 
		printf ("\nCarregando jogo...");
	break;
	
	case 3:
		printf ("\n        Configura��es ");
		printf ("\n--------------------------------------------");
		printf ("\n  [Gr�fico]    | Suave   (M�dio)    Alto ");
		printf ("\n  [Som]        | Baixo    M�dio    (Alto)");
		printf ("\n  [Idioma]     | (Port)    Ing      Fran");
	break;
	
	default:
		printf ("Op��o Inv�lida!");
	break;
}


return 0;

}
