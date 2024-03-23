#include <stdio.h>
#include <locale.h>

float notas[2][3] = {{7.0,9.0,8.0},
				     {8.0,7.0,3.0}};
						  
char alunos[2][200] = {"MARTA SILVA", "JOÃO SANTOS"};
int i, j;


int main(){
	setlocale(LC_ALL, "portuguese");
	
	for(i=0;i<2;i++){
		printf("%dº ALUNO(A): %s\n",i+1,alunos[i]);
		
		for(j=0;j<3;j++){
		printf("%dª NOTA: %.1f\n",j+1,notas[i][j]);
		}
		
		puts("\n");
	}
	
	return 0;
}
