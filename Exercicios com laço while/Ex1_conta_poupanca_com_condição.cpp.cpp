#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main(){
	setlocale(LC_ALL, "Portuguese");
	double deposito,dep1,dep2,dep3;
	char resp;
	puts("C�LCULO DE D�POSITO INICIAL MAIS JUROS DE 1% AO M�S RESULTADO FINAL AO TERCEIRO M�S\n");
	deposito=500.00;
	dep1=deposito*0.01+deposito;
	dep2=dep1*0.01+dep1;
	dep3=dep2*0.01+dep2;
	printf("deposito inicial � de %.2lf\n", deposito);
	puts("deseja calcular o juros 1\% ao m�s para verificar quanto ter� daqui 3 meses?\n");
	puts("digite S - sim ou N - n�o\n ");
	resp = getchar();
	while(resp=='s'){
		printf("o valor do juros na sua poupan�a no terceiro m�s � %.2lf",dep3);break;
	}while(resp=='n'){
		puts("Ok at� mais...");break;
	}while(resp!='s'&& resp != 'n'){
		puts("ops!! ouve um erro, digite a resposta novamente");break;
	}
	return(0);
	system("PAUSE");
	
}
