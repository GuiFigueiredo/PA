#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	double altura,base;
	int valor=1;
	double area;
	puts("CALCULE A �REA DE UM TRI�NGULO");
	while(valor<=10){
		
		puts("\ninforme o valor da base do tri�ngulo");
		scanf("%lf",&base);
		puts("informe a altura do tri�ngulo");
		scanf("%lf",&altura);
		area=base*altura/2;
		printf("A �rea do tri�ngulo � %lf\n",area);
	valor++;	
	}
	return(0);
	system("PAUSE");
}
