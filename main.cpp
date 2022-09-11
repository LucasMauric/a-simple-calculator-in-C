#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */




//FUNCAO QUE VAI FAZER OS CALCULOS


//Ha possibilidade de ocorrer erros caso abrir este programa no vscode!


void calculo(){
	
	
	float numero_um, numero_dois, resultado;
	int operacao, continuar;
	
	do{
		printf("\n========CALCULADORA======== \n");
		
		
		printf("Digite o primeiro numero: ");
		scanf("%f",&numero_um);
		
		printf("Digite o segundo numero: ");
		scanf("%f",&numero_dois);
		
		printf("Qual operacao voce deseja fazer?\n ");
		printf("[1] adicao \n");
		printf("[2] subtracao \n");
		printf("[3] multiplicacao \n");
		printf("[4] divisao \n");
		
		scanf("%d",&operacao);
		
		switch(operacao){
			
			case 1:
				
				resultado = numero_um + numero_dois;
				printf("A adisao  de %.1f e %.1f = %.1f \n",numero_um,numero_dois,resultado);
				
				break;
			case 2:
				
				resultado = numero_um - numero_dois;
				printf("A subtracao de %.1f e %.1f = %.1f \n",numero_um,numero_dois,resultado);
				break;
			case 3:
				
				resultado = numero_um * numero_dois;
				printf("A multiplicacao de %.1f e %.1f = %.1f \n",numero_um,numero_dois,resultado);
				break;
			case 4:
				
				resultado = numero_um / numero_dois;
				printf("A divisao de %.1f e %.1f = %.1f \n",numero_um,numero_dois,resultado);
				break;
			
			default:
				system("cls");
				printf("Digite um valor valido!\n");
				calculo();
				break;
		
		}
		
		
		printf("Digite [1] para continuar ou qualquer coisa para sair: ");
		scanf("%d",&continuar);
		system("cls");
		
		
	}while(continuar == 1);
	
	
	
	
}






//TELA INICIAL

int main(int argc, char** argv) {
	
	
	int opc;
	
	printf("Digite [1] para iniciar ou qualquer coisa para sair: ");
	
	scanf("%d",&opc);
	
	if(opc == 1){
		
		system("cls");
		calculo();
	}
	
	else{
		
		printf("Sistema encerrado");
	}
	
	
	
	
	


	
	
	
	return 0;
}
