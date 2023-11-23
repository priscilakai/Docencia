#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char palavra[20], op;
	FILE *arq;//arquivo do tipo FILE
	
	arq = fopen("ArqString.txt", "w");//cria o arquivo para gravação
	if(arq == NULL)
	{
		printf("Erro, nao foi possivel abrir o arquivo\n");
		exit(1);
	}
	
	do{
		printf("Palavra: ");
		fflush(stdin);
		fgets(palavra,19,stdin);//leitura de string
		fputs(palavra, arq);//gravação de string; sempre insere '\n' no final
		printf("\n Continuar (S/N)?");
		fflush(stdin);
		scanf("%c", &op);
	}while(op == 's' || op == 'S');
	
	fclose(arq);//fecha o arquivo	
	return 0;
}




