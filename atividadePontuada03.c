#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
setlocale (LC_ALL, "portuguese");	

char classificacao [50];
int nota;



printf ("Informe a nota do aluno(a): ");
scanf ("%d", &nota);

if (nota >= 9){
	strcpy (classificacao, "Excelente!!");
}else if (nota >= 7 && nota < 8.9){
	strcpy (classificacao, "Bom");
}else if (nota >= 5 && nota < 6.9){
	strcpy (classificacao, "Razoável");
}else strcpy (classificacao, "Insuficiente");


printf ("\nClassificação: %s", classificacao);



return 0;
}
