#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int escolha;
	puts ("ESCOLHA SEU LANCHE");
	puts("1- Big Mac"); 
	puts("2- Quarteir�o");
	puts("3- MacChicken");
	puts("4- Cheddar MacMelt");
	puts("5- MacMax");
	puts("digite o n�mero do seu lache para seleciona-lo");
	scanf("%d",&escolha);
	switch(escolha){
		case 1:puts("Lanche escolhido - Big Mac Boa refei��o"); break;
		case 2:puts("Lanche escolhido - Quarteir�o Boa refei��o");break;
		case 3:puts("Lanche escolhido - MacChicken Boa refei��o");break;
		case 4:puts("Lanche escolhido - Cheddar MacMelt Boa refei��o");break;
		case 5:puts("Lanche escolhido - MacMax Boa refei��o");break;
		default : puts("fa�a sua escolha novamente");
		
		}

	system("PAUSE");
	return (0);
}
