#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
		double deposito = 500;
		int vz=1;
		puts("calcule o juros de 1% ao m�s na sua conta poupan�a");
		
		while(vz<= 3 ){
		
			deposito = deposito*0.01+deposito;
			printf("O saldo da sua conta poupan�a � %.2lf\n", deposito);vz++;
	
		}
		return(0);
		system("PAUSE");
}
