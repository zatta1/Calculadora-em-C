#include <stdio.h>

void adicao (){
	double operador1, operador2;
	double resultado;
	
	printf ("Digite o primeiro operador: \n");
	scanf ("%lf", &operador1);
	printf("Digitre o segundo operador: \n");
	scanf ("%lf", &operador2);
	
	resultado = operador1 + operador2;
	printf("O resultado da soma é: %lf\n", resultado);
}

void subtracao(){
	double operador1, operador2;
	double resultado;
	
	printf ("Digite o primeiro operador: \n");
	scanf ("%lf", &operador1);
	printf ("Digite o segundo operador: \n");
	scanf ("%lf", &operador2);
	
	resultado = operador1 - operador2;
	printf ("O resultado da subtracao eh: %lf\n", resultado);
}

void multiplicacao (){
	
	double operador1, operador2;
	double resultado;
	
	printf ("Digite o primeiro operador: \n");
	scanf ("%lf", &operador1);
	printf ("Digite o segundo operador:\n");
	scanf ("%lf", &operador2);
	
	resultado = operador1 * operador2;
	printf ("O resultado da multiplicacao eh:%lf\n", resultado);
}

void divisao (){
	
	double operador1, operador2;
	double resultado;
	
	printf ("Digite o primeiro operador: \n");
	scanf ("%lf", &operador1);
	printf ("Digite o segundo operador: \n ");
	scanf ("%lf", &operador2);
	
	resultado = operador1 / operador2;
	printf ("O resultado da divisao eh: %lf\n", resultado);
	
}
	
	int main()
{
	
	int opcao;
	do {
		printf ("**MENU CALCULADORA**\n");
		printf ("** 1 - ADICAO\n");
		printf ("** 2 - SUBTRACAO\n");
		printf ("** 3 - MULTIPLICACAO\n");
		printf ("** 4 - DIVISAO\n");
		printf ("** 0 - SAIR\n");
		printf ("*********************\n");
		
		printf ("Digite a opcao de calculo:\n");
		scanf ("%d", &opcao);
		
		switch (opcao){
			case 1:
				adicao();
				break;
			case 2:
				subtracao();
				break;
			case 3: 
				multiplicacao();
				break;
			case 4: 
				divisao();
				break;
			}	
				
		} while (opcao != 0);
		
	}
















