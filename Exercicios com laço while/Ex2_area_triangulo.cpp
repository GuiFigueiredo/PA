#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	double altura,base;
	int valor=1;
	double area;
	puts("CALCULE A ÁREA DE UM TRIÂNGULO");
	while(valor<=10){
		
		puts("\ninforme o valor da base do triângulo");
		scanf("%lf",&base);
		puts("informe a altura do triângulo");
		scanf("%lf",&altura);
		area=base*altura/2;
		printf("A área do triângulo é %lf\n",area);
	valor++;	
	}
	return(0);
	system("PAUSE");
}
