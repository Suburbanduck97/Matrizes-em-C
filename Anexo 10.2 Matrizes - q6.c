#include <stdio.h>
#include <locale.h>
#define LINE 3
#define COLUNM 3

int main(){
	char disciplinas[LINE][200]; //Declarando vetor char da forma: [<TAM>][<QUANTIDADE>];
	float notas[LINE][COLUNM] = {{1,1,1},{1,1,1},{1,1,1}}, mediaPonderada[LINE], somaNotas = 0; 
	int i, j, peso[LINE][COLUNM], somaPeso = 0;
	
	setlocale(LC_ALL,"portuguese");
	
	//Solicitando dados.
	puts("=== MENU DO PROFESSOR ===\n");
	
	for(i=0;i<LINE;i++){ //La�o "for" para movimentar elementos de linha.
		fflush(stdin); //Importante a aplica��o para que n�o tenha lixo no teclado.
		printf("DIGITE O NOME DA %d� MAT�RIA: ",i+1);
		fgets(disciplinas[i],200,stdin); //Para espa�amento nas palavras.
		
		for(j=0;j<COLUNM;j++){ //La�o "for" para movimentar elementos da coluna.
			while(notas[i][j] > 0 && notas[i][j] < 10){
			fflush(stdin); 
			printf("DIGITE A %d� NOTA: ",j+1); 
			scanf("%f",&notas[i][j]);
			
			fflush(stdin);
			printf("DIGITE O PESO DA NOTA: "); //Para inserir o peso da nota, aparecer� logo ap�s a inser��o de uma nota.
			scanf("%d",&peso[i][j]);
			
			somaNotas += (notas[i][j] * peso[i][j]); //Somar� as notas e multiplicando pelos pesos.
			somaPeso += peso[i][j]; //Somar� os pesos inseridos para efetuarmos a m�doia.
			}
		}
		
		mediaPonderada[i] = somaNotas / somaPeso; //A soma da nota ser� dividida pela soma dos pesos, assim correspondendo a m�dia ponderada.
		somaNotas = 0; //Para retornar com valor zero e n�o somar todos os valores atribuidos.
		somaPeso = 0;
		puts("\n");		
	}
	
	//EXIBINDO DADOS
	system("cls || clear");
	puts("=== MENU DE EXIBI��O ===\n");
	
	for(i=0;i<LINE;i++){ //La�o "for" para exibir disciplinas, disciplinas[LINE] e m�dia.
		fflush(stdin);
		printf("%d� MAT�RIA: %s\n",i+1,disciplinas[i]);
		
		for(j=0;j<COLUNM;j++){ //La�o "for" para exibir notas, notas[LINE][COLUMN] e tamb�m os pesos das notas, peso[LINE][COLUNM]. 
			printf("%d� NOTA: %.1f\n",j+1,notas[i][j]);
			printf("PESO DA %d� NOTA: %d\n",j+1,peso[i][j]); 
		}
		
		printf("\nM�DIA TOTA: %.1f",mediaPonderada[i]); //Exibindo m�dia, mediaPonderada[LINE];
		puts("\n");		
	}
	
	return 0;
}