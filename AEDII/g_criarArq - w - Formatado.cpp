#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char palavra[20], op;
	int numero;
	FILE *arq;//arquivo do tipo FILE
	
	arq = fopen("ArqFormatado.txt", "w");//cria o arquivo para gravação
	if(arq == NULL)
	{
		printf("Erro, nao foi possivel abrir o arquivo\n");
		exit(1);
	}
	
	do{
		printf("Palavra: \n");
		fflush(stdin);
		fgets(palavra,19,stdin);//leitura de string
		printf("Numero: ");
		scanf("%d", &numero);
		fprintf(arq, "%s%d", palavra, numero);//gravação de dados;
		printf("\n Continuar (S/N)?");
		fflush(stdin);
		scanf("%c", &op);
	}while(op == 's' || op == 'S');
	
	fclose(arq);//fecha o arquivo	
	return 0;
}




