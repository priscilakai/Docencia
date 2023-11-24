#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char palavra[20];
	int numero;
	FILE *arq;//arquivo do tipo FILE
	
	arq = fopen("ArqFormatado.txt", "r");//abre o arquivo para leitura
	if(arq == NULL)
	{
		printf("Erro, nao foi possivel abrir o arquivo\n");
		exit(1);
	}
	
	/*while(!feof(arq)){
 		fscanf(arq, "%s%d", palavra, &numero);
  		printf("Palavra: %s, numero: %d \n", palavra, numero);
	 }
	 ou: */	
	
	while(fscanf(arq, "%s%d", palavra, &numero) != EOF) 
		printf("Palavra: %s, numero: %d \n", palavra, numero);
	
	fclose(arq);//fecha o arquivo	
	return 0;
}




