#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char ch;
	FILE *arq;//arquivo do tipo FILE
	
	arq = fopen("ArqCaractere.txt", "a");//abre o arquivo para gravação. Se não existir, ele é criado automaticamente para a escrita
	if(arq == NULL)
	{
		printf("Erro, nao foi possivel abrir o arquivo\n");
		exit(1);
	}	
	
	do{
		printf("Caractere: ");
		fflush(stdin);
		ch=getchar();//leitura de caractere		
	    fputc(ch, arq);//grava caractere no arquivo
	}while(ch != '\n');
		
	fclose(arq);//fecha o arquivo	
	return 0;
}
