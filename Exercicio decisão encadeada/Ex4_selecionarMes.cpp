#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	int escolha;
	puts("ESCOLHA O M�S");
	puts("digite o n�mero do m�s correspondente 1 - 12");
	scanf("%d",&escolha);
	
	switch (escolha){
		case 1:puts("\n 1- M�s de Janeiro ");break;
		case 2:puts("\n2- M�s de Fevereiro");break;
		case 3:puts("\n3- M�s de Mar�o");break;
		case 4:puts("\n4- M�s de Abril");break;
		case 5:puts("\n5- M�s de Maio");break;
		case 6:puts("\n6- M�s de Junho");break;
		case 7:puts("\n7- M�s de Julho");break;
		case 8:puts("\n8- M�s de Agosto");break;
		case 9:puts("\n9- M�s de Setembro");break;
		case 10:puts("\n10- M�s de Outubro");break;
		case 11:puts("\n11- M�s de Novembro");break;
		case 12:puts("\n12- M�s de Dezembro");break;
		default: puts("informe novamente ");
	}
	system("PAUSE");
	return(0);
	
	
}
