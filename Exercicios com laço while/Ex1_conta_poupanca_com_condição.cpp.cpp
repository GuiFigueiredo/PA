#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main(){
	setlocale(LC_ALL, "Portuguese");
	double deposito,dep1,dep2,dep3;
	char resp;
	puts("CÁLCULO DE DÉPOSITO INICIAL MAIS JUROS DE 1% AO MÊS RESULTADO FINAL AO TERCEIRO MÊS\n");
	deposito=500.00;
	dep1=deposito*0.01+deposito;
	dep2=dep1*0.01+dep1;
	dep3=dep2*0.01+dep2;
	printf("deposito inicial é de %.2lf\n", deposito);
	puts("deseja calcular o juros 1\% ao mês para verificar quanto terá daqui 3 meses?\n");
	puts("digite S - sim ou N - não\n ");
	resp = getchar();
	while(resp=='s'){
		printf("o valor do juros na sua poupança no terceiro mês é %.2lf",dep3);break;
	}while(resp=='n'){
		puts("Ok até mais...");break;
	}while(resp!='s'&& resp != 'n'){
		puts("ops!! ouve um erro, digite a resposta novamente");break;
	}
	return(0);
	system("PAUSE");
	
}
