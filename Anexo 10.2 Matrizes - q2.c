#include <stdio.h>
#include <locale.h>
#define LINE 4
#define COLUMN 3

char nome[LINE][200];
float notas[LINE][COLUMN], somaNotas = 0, mediaNotas[LINE];
int i, j;

void pedindoDados(){
	for(i=0;i<LINE;i++){
		printf("NOME DO %dº ALUNO: ",i+1);
		scanf("%s",&nome[i]);
		
		for(j=0;j<COLUMN;j++){
			printf("INSIRA A SUA %dº NOTA: ",j+1);
			scanf("%f",&notas[i][j]);
			somaNotas += notas[i][j];
		}
		
		//Para dar a média individual dos alunos.
		fflush(stdin);
		mediaNotas[i] = somaNotas / j;
		somaNotas = 0;
		
		puts("\n");
	}
}

void exibindoDados(){
	for(i=0;i<LINE;i++){
		printf("%dº ALUNO(A): %s\n",i+1,nome[i]);
			for(j=0;j<COLUMN;j++){
			printf("%dº NOTA: %.1f\n",j+1,notas[i][j]);		
		}
		fflush(stdin);
		printf("A MÉDIA DAS NOTAS É: %.1f\n",mediaNotas[i]);
		puts("\n");
	}
}

int main(){
	setlocale(LC_ALL, "portuguese");
	pedindoDados(i,j,nome[LINE],notas[LINE][COLUMN],somaNotas = 0,mediaNotas[LINE]);
	exibindoDados(i,j,nome[LINE],notas[LINE][COLUMN],somaNotas = 0,mediaNotas[LINE]);
	
	return 0;
}
