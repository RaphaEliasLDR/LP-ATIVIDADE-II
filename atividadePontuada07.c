#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
setlocale (LC_ALL, "portuguese");

int menu;


printf ("\nMenu    |  Opções");
printf ("\n-------------------------");
printf ("\n  [1]   |  Novo Jogo");
printf ("\n  [2]   |  Carregar Jogo");
printf ("\n  [3]   |  Configurações");

printf ("\n\nInforme a opção: ");
scanf ("%d", &menu);


switch (menu)
{
	case 1:
		printf ("\nComeçando uma nova campanha...");
	break;
	
	case 2: 
		printf ("\nCarregando jogo...");
	break;
	
	case 3:
		printf ("\n        Configurações ");
		printf ("\n--------------------------------------------");
		printf ("\n  [Gráfico]    | Suave   (Médio)    Alto ");
		printf ("\n  [Som]        | Baixo    Médio    (Alto)");
		printf ("\n  [Idioma]     | (Port)    Ing      Fran");
	break;
	
	default:
		printf ("Opção Inválida!");
	break;
}


return 0;

}
