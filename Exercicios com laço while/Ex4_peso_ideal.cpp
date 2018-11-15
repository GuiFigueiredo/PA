#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float altura,sexo,pesoideal;
	puts("CALCULE SEU PESO IDELA APARTIR DA ALTURA E SEXO");
	int vz=1;
	while(vz<=15){
		printf("\n%d pessoa",vz);
		puts("\ninforme sua altura");
		scanf("%f",&altura);
		puts("informe o sexo 1-homem 2- mulher");
		scanf("%f",&sexo);
		if(sexo==1){
		pesoideal=(altura*72.7)-58;
		}
		else if(sexo==2){
			pesoideal=(altura*62.1)-44.7;	
		}
		printf("Seu peso ideal é %f\n",pesoideal);
		vz++;
	}
	return(0);
	system("PAUSE");
}

