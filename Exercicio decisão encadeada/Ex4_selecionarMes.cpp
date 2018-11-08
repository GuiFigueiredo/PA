#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	int escolha;
	puts("ESCOLHA O MÊS");
	puts("digite o número do mês correspondente 1 - 12");
	scanf("%d",&escolha);
	
	switch (escolha){
		case 1:puts("\n 1- Mês de Janeiro ");break;
		case 2:puts("\n2- Mês de Fevereiro");break;
		case 3:puts("\n3- Mês de Março");break;
		case 4:puts("\n4- Mês de Abril");break;
		case 5:puts("\n5- Mês de Maio");break;
		case 6:puts("\n6- Mês de Junho");break;
		case 7:puts("\n7- Mês de Julho");break;
		case 8:puts("\n8- Mês de Agosto");break;
		case 9:puts("\n9- Mês de Setembro");break;
		case 10:puts("\n10- Mês de Outubro");break;
		case 11:puts("\n11- Mês de Novembro");break;
		case 12:puts("\n12- Mês de Dezembro");break;
		default: puts("informe novamente ");
	}
	system("PAUSE");
	return(0);
	
	
}
