#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float imc,peso,altura;
	puts("CALCULE SEU PESO IDEAL ");
	puts("informe seu peso:");
	scanf("%f",&peso);
	puts("informe sua altura:");
	scanf("%f",&altura);
	
	imc=peso/(altura*altura);
	if(imc<18){
		printf("Status - Magreza imc = %.2f ",imc);
	}else if(imc>=18 && imc<24.9){
		printf("Status - Saudável imc = %.2f ",imc);
	}else if(imc>25 && imc<29.9){
		printf("Status - Sobrepeso imc = %.2f ",imc);
	}else if(imc>= 30){
		printf("Status - Obesidade imc = %.2f ",imc);
	}
	
	system("PAUSE");
	return(0);
}
