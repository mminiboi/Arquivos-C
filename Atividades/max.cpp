#include<stdio.h>
#include<locale.h>
maximo(int valora, int valorb){
	if (valora > valorb){
		printf("O maior valor é: %d \n", valora);
	} else {
		printf("O maior valor é: %d \n", valorb);
	}
}
main(){
	setlocale(LC_ALL, "Portuguese");
	int a, b;
	printf("Entre com o valor de a: ");
	scanf("%d", &a);
	printf("Entre com o valor de b: ");
	scanf("%d", &b);
	maximo(a, b);	
	system("pause");
}
