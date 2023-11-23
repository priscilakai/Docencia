#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char palavra[20];
	FILE *arq;//arquivo do tipo FILE
	
	arq = fopen("ArqString.txt", "r");//abre o arquivo para leitura
	if(arq == NULL)
	{
		printf("Erro, nao foi possivel abrir o arquivo\n");
		exit(1);
	}
	
	while(fgets(palavra, 19, arq) != NULL)//leitura de string. fgets retorna string
		printf("%s", palavra);
	
	fclose(arq);//fecha o arquivo	
	return 0;
}




