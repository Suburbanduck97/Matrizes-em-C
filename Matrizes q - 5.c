#include <stdio.h>
#include <locale.h>
#define LINE 2
#define COLUNM 2

int main(){
	char nomeBanda[LINE][200], nomeIntegrantes[LINE][COLUNM][200];
	char resposta;
	int i, j;
	
	setlocale(LC_ALL, "portuguese");
	
	
	for(i=0;i<LINE;i++){
	puts("=== CADASTRO DAS BANDAS ===\n");
	do{
	fflush(stdin);
	printf("DIGITE O NOME DA %dª BANDA: ",i+1);
	fgets(nomeBanda[i],200,stdin);
	
	for(j=0;j<COLUNM;j++){
		fflush(stdin);
		printf("DIGITE O NOME DO %dº INTEGRANTE: ",j+1);
		fgets(nomeIntegrantes[i][j],200,stdin);
	}
	
	printf("\n\nDESEJA CORRIGIR? (S) PARA CORRIGIR OU (N) PARA PROSSEGUIR\n RESPOTA: ");
	fflush(stdin);
	scanf("%c",&resposta);
	resposta = toupper(resposta);
	system("cls || clear");
	
	}while(resposta != 'N');
	
	}
	
	puts("=== EXIBIÇÃO DE CADASTRO ===\n");
	for(i=0;i<LINE;i++){
		printf("\nNOME DA %dª BANDA: %s",i+1,nomeBanda[i]);
		for(j=0;j<COLUNM;j++){
			printf("%dº INTEGRANTE: %s",j+1,nomeIntegrantes[i][j]);
		}
	}
	
	return 0;

}
