#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float peso,altura,imc;
	char resp;
	puts("verifique seu IMC - indice de Massa Corporal");
	puts("deseja verificar seu IMC - Indice de Massa Corporal\n ");
	puts("informe S -sim ou N- não ");
	resp = getchar();
	while(resp=='s'){
		puts("informe seu peso");
		scanf("%f",&peso);
		puts("informe sua altura");
		scanf("%f",&altura);
		imc=peso/(altura*altura);
		printf("seu IMC ídeal é %f",imc);
	}
	while(resp=='n'){
		puts("ok até mais...");break;
	}
	return(0);
	system("PAUSE");
}
