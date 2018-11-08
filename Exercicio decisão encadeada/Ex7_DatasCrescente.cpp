#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int dia,mes,ano,dia1,mes1,ano1;
	puts("PROGRAMA PARA ANO DE FORMA CRESCENTE");
	puts("informe a primeira data");
	puts("informe o dia\n");
	scanf("%d",&dia);
	puts("informe o mes\n");
	scanf("%d",&mes);
	puts("informe o ano\n");
	scanf("%d",&ano);
	puts("informe a segunda data");
	puts("informe o dia\n");
	scanf("%d",&dia1);
	puts("informe o mes\n");
	scanf("%d",&mes1);
	puts("informe o ano\n");
	scanf("%d",&ano1);
	
	if(dia<dia1 && mes<mes1 && ano<ano1){
		printf("%d/%d/%d -- %d/%d/%d\n",dia,mes,ano,dia1,mes1,ano1);
	}else if(dia>dia1 && mes<mes1 && ano<ano1){
		printf("%d/%d/%d -- %d/%d/%d\n",dia1,mes,ano,dia,mes1,ano1);
	}else if(dia<dia1 && mes>mes1 && ano<ano1){
		printf("%d/%d/%d -- %d/%d/%d\n",dia,mes1,ano,dia1,mes,ano1);
	}else if(dia<dia1 && mes<mes1 && ano>ano1){
		printf("%d/%d/%d -- %d/%d/%d\n",dia,mes,ano1,dia1,mes1,ano);
	}else if(dia>dia1 && mes>mes1 && ano<ano1){
		printf("%d/%d/%d -- %d/%d/%d\n",dia1,mes1,ano,dia,mes,ano1);
	}else if(dia<dia1 && mes>mes1 && ano>ano1){
		printf("%d/%d/%d -- %d/%d/%d\n",dia,mes1,ano1,dia1,mes,ano);
	}else if(dia>dia1 && mes>mes1 && ano>ano1){
		printf("%d/%d/%d -- %d/%d/%d\n",dia1,mes1,ano1,dia,mes,ano);
	}else if(dia==dia1 && mes==mes1 && ano==ano1){
		puts("AS datas são iguais");
	}
	system("PAUSE");
	return(0);
	
}
