#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL,"Portuguese");
	float horario;
	puts("TURNO DE TRABALHO");
	puts("informe o início do turno de trabalho:");
	scanf("%f",&horario);
	if(horario >=5 && horario <13){
		puts("O turno do trabalho - Manhã");
	}
	else if(horario >= 13 && horario< 21){
		puts("O turno do trabalho - Tarde");
	}else if(horario >= 21 && horario <5 ){
		puts("O truno do trabalho -  Noite");
	}
	system("PAUSE");
	return(0);
}
