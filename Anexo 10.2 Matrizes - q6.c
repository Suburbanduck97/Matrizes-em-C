#include <stdio.h>
#include <locale.h>
#define LINE 2
#define COLUNM 3

int main(){
	char disciplina[LINE][200];
	float nota[LINE][COLUNM], somaNota = 0, mediaPonderada[LINE] ;
	int i, j, pesoNota[LINE][COLUNM], somaPeso = 0;
	
	setlocale(LC_ALL, "portuguese");
	
	//Solicitando dados ao usuário
	puts("=== MENU DO PROFESSOR ===\n");
	for(i=0;i<LINE;i++){
		printf("DIGITE O NOME DA MATÉRIA: ");
		fflush(stdin);
		fgets(disciplina[i],200,stdin);	
	for(j=0;j<COLUNM;j++){
	do{
		printf("DIGITE A %dª NOTA: ",j+1);
		scanf("%f",&nota[i][j]);
	}while(nota[i][j] < 0 || nota[i][j] > 10);
	
	printf("DIGITE O PESO DA NOTA: ");
	scanf("%d",&pesoNota[i][j]);
	
	somaNota += (nota[i][j] * pesoNota[i][j]);
	somaPeso += pesoNota[i][j];
	}
	
	mediaPonderada[i] = somaNota / somaPeso;
	somaNota = 0;
	somaPeso = 0; 
	puts("\n");
	}
	
	
	//Exibindo resultados
	system("cls || clear");
	puts("=== EXIBINDO RESULTADOS ===\n");
	for(i=0;i<LINE;i++){
		printf("%dª DISCIPLINA: %s\n",i+1,disciplina[i]);
		for(j=0;j<COLUNM;j++){
			printf("%dª NOTA: %.1f\n",j+1,nota[i][j]);
			printf("PESO DA %dª NOTA: %d\n",j+1,pesoNota[i][j]);
		}
		
		printf("\nMÉDIA PONDERADA: %.1f",mediaPonderada[i]);
		puts("\n");
	}
	
	return 0;
}
