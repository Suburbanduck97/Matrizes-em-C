#include <stdio.h>
#include <locale.h>

float notas[2][3] = {{7.0,9.0,8.0}, // Organizações das matrizes.
		     {8.0,7.0,3.0}};
						  
char alunos[2][200] = {"MARTA SILVA", "JOÃO SANTOS"}; //Formato de declaração em char funciona da forma[<TAM>][<QUANTIDADE>]
int i, j; // "i" para representar a quantidade de linhas, e "j" para representar as posições dos elemento do vetor.


int main(){
	setlocale(LC_ALL, "portuguese");
	
	for(i=0;i<2;i++){ //Para o i(linha) = 0, o i < 2, progrida o i++.
		printf("%dº ALUNO(A): %s\n",i+1,alunos[i]);
		
		for(j=0;j<3;j++){ //Para o j(posição) = 0, o j < 3, progrida o j++;
		printf("%dª NOTA: %.1f\n",j+1,notas[i][j]);
		
			/* É preciso que execute corretamente o laço de repetição de acordo com o que o problema solicita.
		neste caso uasamos o primeiro laço "for(i=0;i<2;i++)" para poder percorrer as linhas do vetor char, que foi 
		associado dois nomes;
		
		Já no segundo laço "for(j=0;j<3;j++)" foi inserido para poder percorrer as posicições do vetores e adjunto a isso, o
		laço "for(i=0;i<2;i++)" também está sendo utilizado para corresponder as exigências solicitada no problema. Portanto,
		temos a forma:
		    "printf("%dª NOTA: %.1f\n",j+1,NOTAS[I][J]);
		*/	
		}
		
		puts("\n");
	}
	
	return 0;
}
