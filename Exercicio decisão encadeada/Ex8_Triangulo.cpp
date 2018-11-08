#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	float a,b,c;
	puts("DESCUBRA O TIPO DE TRIANGULO");
	puts("informe os valores");
	puts("digite o valor do lado A do triangulo");
	scanf("%f",&a);
	puts("digite o valor do lado B do triangulo");
	scanf("%f",&b);
	puts("digite o valor do lado C do triangulo");
	scanf("%f",&c);
	
	
	if(b-c<a && a <b+c ){
		puts("triangulo");
	}else if(a-b<c &&c <a+b){
		puts("triangulo");
	}
	system("PAUSE");
	return(0);
	
}
