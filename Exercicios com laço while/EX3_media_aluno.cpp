#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int nota1,nota2,nota3,nota4,media,vz;
	puts("CALCULO DE NOTAS BIMESTRAIS DOS ALUNOS");
	vz=1;
	while(vz<=7){
		printf("\nAluno %d",vz);
		puts("\n informe a primeira nota do aluno");
		scanf("%d",&nota1);
		puts("informe a segunda nota do aluno");
		scanf("%d",&nota2);
		puts("informe a terceira nota do aluno");
		scanf("%d",&nota3);
		puts("informe a quarta nota do aluno");
		scanf("%d",&nota4);
		media=(nota1+nota2+nota3+nota4)/4;
		printf("A média do aluno é %d\n", media);
		vz++;
	}
	return(0);
	system("PAUSE");
}
