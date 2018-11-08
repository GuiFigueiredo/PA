#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float nota,media;
	puts ("VERIFIQUE SE ESTÁ APROVADO OU REPROVADO");
	puts("informe a primeira nota");
	scanf("%f",&nota);
	puts("informe a segunda nota");
	scanf("%f",&nota);
	puts("informe a terceira nota");
	scanf("%f",&nota);
	puts("informe a quarta nota");
	scanf("%f",&nota);
	
	media=(nota+nota+nota+nota)/4;
	if(media>=5 && media <9){
		printf("O ALUNO ESTÁ APROVADO MÉDIA- %2.f\n",media);
	}else if(media<5){
		printf("O ALUNO ESTÁ REPROVADO MÉDIA- %2.f\n",media);
	}
	system("PAUSE");
	return(0);
}
