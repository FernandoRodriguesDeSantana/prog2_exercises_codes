// Exercício: Leia um número inteiro a partir do usuário e  grave-o  em  um  arquivo  nomeado “numeros.txt”.

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *archive;

	archive = fopen("number.txt", "w");
	if(archive == NULL)
	{
    	printf("\nERROR! Archive can't be oppened.");
    	return 1;
	}

	int n = 0;
	printf("\nEnter a integer number: ");
	scanf("%d", &n);

	fprintf(archive, "%d", n);

	fclose(archive);
	return 0;
}
