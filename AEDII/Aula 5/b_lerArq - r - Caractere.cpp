#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char ch;
	FILE *arq;//arquivo do tipo FILE
	
	arq = fopen("ArqCaractere.txt", "r");//abre o arquivo para leitura
	if(arq == NULL)
	{
		printf("Erro, nao foi possivel abrir o arquivo\n");
		exit(1);
	}	
	
	/*while(!feof(arq)){
		ch = fgetc(arq);
		printf("%c", ch);
	}
		ou: */
	
	while ((ch = fgetc(arq)) != EOF)//leitura, caractere a caractere
		printf("%c", ch);
		
	fclose(arq);//fecha o arquivo	
	return 0;
}
