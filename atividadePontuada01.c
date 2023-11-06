#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
setlocale (LC_ALL, "portuguese");	
	
	int temperatura;
	char clima [50];
	
	
	printf ("Temperatura agora: ");
	scanf ("%d", &temperatura);
	
	
	if (temperatura > 25){
		strcpy (clima, "Ensolarado");
	}else if (temperatura < 25 && temperatura > 15){
		strcpy (clima, "Nublado");
	}else{
		strcpy (clima, "Chuvoso");
	}
	
	
	printf ("Clima agora esta: %s", clima);
	
	return 0;
}
