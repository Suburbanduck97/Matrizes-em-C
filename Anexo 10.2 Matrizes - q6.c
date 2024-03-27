#include <stdio.h>
#include <locale.h>
#define LINE 3
#define COLUNM 3

int main(){
	char disciplinas[LINE][200]; //Declarando vetor char da forma: [<TAM>][<QUANTIDADE>];
	float notas[LINE][COLUNM], mediaPonderada[LINE], somaNotas = 0; 
	int i, j, peso[LINE][COLUNM], somaPeso = 0;
	
	setlocale(LC_ALL,"portuguese");
	
	//Solicitando dados.
	puts("=== MENU DO PROFESSOR ===\n");
	
	for(i=0;i<LINE;i++){ //Laço "for" para movimentar elementos de linha.
		fflush(stdin); //Importante a aplicação para que não tenha lixo no teclado.
		printf("DIGITE O NOME DA %dª MATÉRIA: ",i+1);
		fgets(disciplinas[i],200,stdin); //Para espaçamento nas palavras.
		
		for(j=0;j<COLUNM;j++){ //Laço "for" para movimentar elementos da coluna.
			fflush(stdin); 
			printf("DIGITE A %dª NOTA: ",j+1); 
			scanf("%f",&notas[i][j]);
			
			fflush(stdin);
			printf("DIGITE O PESO DA NOTA: "); //Para inserir o peso da nota, aparecerá logo após a inserção de uma nota.
			scanf("%d",&peso[i][j]);
			
			somaNotas += (notas[i][j] * peso[i][j]); //Somará as notas e multiplicando pelos pesos.
			somaPeso += peso[i][j]; //Somará os pesos inseridos para efetuarmos a médoia.
		}
		mediaPonderada[i] = somaNotas / somaPeso; //A soma da nota será dividida pela soma dos pesos, assim correspondendo a média ponderada.
		somaNotas = 0; //Para retornar com valor zero e não somar todos os valores atribuidos.
		somaPeso = 0;
		puts("\n");		
	}
	//EXIBINDO DADOS
	system("cls || clear");
	puts("=== MENU DE EXIBIÇÃO ===\n");
	
	for(i=0;i<LINE;i++){ //Laço "for" para exibir disciplinas, disciplinas[LINE] e média.
		fflush(stdin);
		printf("%dª MATÉRIA: %s\n",i+1,disciplinas[i]);
		
		for(j=0;j<COLUNM;j++){ //Laço "for" para exibir notas, notas[LINE][COLUMN] e também os pesos das notas, peso[LINE][COLUNM]. 
			printf("%dª NOTA: %.1f\n",j+1,notas[i][j]);
			printf("PESO DA %dª NOTA: %d\n",j+1,peso[i][j]); 
		}
		
		printf("\nMÉDIA TOTA: %.1f",mediaPonderada[i]); //Exibindo média, mediaPonderada[LINE];
		puts("\n");		
	}
	
	return 0;
}
