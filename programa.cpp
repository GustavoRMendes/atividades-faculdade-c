#include <stdio.h>
#include <stdlib.h>
//ex16
main(){
	int number;
	float number1,number2,number3,media,numeroDobro,dobro;
	printf("\t--------------------MENU------------------------\n");
	printf("Escolha uma da opcoes abaixo: \n");
	printf(" CALCULAR A MEDIA DE TRES NUMEROS - Digite 1\n");
	printf(" CALCULAR O DOBRO DE UM NUMERO - Digite 2\n");
	printf(" SAIR DO PROGRAMA - Digite 3\n");
	printf(" 1 , 2 ou 3? Digite aqui: \n");
	scanf("%d",&number);
	switch(number){
		case 1:
			printf("Digite o primeiro numero: \n");
			scanf("%f",&number1);
			printf("Digite o segundo numero: \n");
			scanf("%f",&number2);
			printf("Digite o terceiro numero: \n");
			scanf("%f",&number3);
			media = (number1 + number2 + number3) / 3;
			printf("Sua media resulta em %.2f \n", media);
			break;
		case 2:
			printf("Digite um numero para calcular seu dobro: \n ");
			scanf("%f",&numeroDobro);
			dobro = numeroDobro * 2;
			printf("O dobro do numero digitado resulta em %.2f \n",dobro);
			break;
		case 3: 
			printf("Saindo do programa... \n");
			break;
		default:
			printf("[ERRO] TENTE NOVAMENTE! \n");
	}
	
	system("pause");
}
