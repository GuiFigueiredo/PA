#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL,"Portuguese");
	int idade;
	puts("VERIFIQUE SUA CATEGORIA DE NADADOR");
	puts("informe sua idade");
	scanf("%d",&idade);
	
	if(idade>=5 && idade<=7){
		puts("Sua categoria é INFANTIL A");
	}else if(idade>= 8 && idade<=10){
		puts("Sua categoria é INFANTIL B");
	}else if (idade>=11 && idade<=13){
		puts("Sua categoria é JUVENIL A");
	}else if(idade>=14&& idade <=17){
		puts("Sua categoria é JUVENIL B");
	}else if(idade>=18 ){
		puts("Sua categoria é SENIOR");
	}else if(idade<5){
		puts("informe a sua idade novamente");
	}
	system("PAUSE");
	return(0);
}
