#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char senha[5];
	int senhaerrada=1;
	puts("VERIFIQUE SE A SENHA ESTÁ CORRETA");
	
	while(senhaerrada<=3){
		puts("informe a senha ");
		scanf("%s",&senha);
		if( strcmp(senha,"asdfg")== 0){
			puts("senha correta!");break;
		}
		else if(strcmp(senha,"asdfg")!=0){
			puts("senha incorreta!");
		}
		senhaerrada++;
	}
	return(0);
	system("PAUSE");
}
