#include<stdio.h>
#include<locale.h>
quadrado(int valora, int valorb){
	if (valora == valorb){
		printf("� um quadrado \n");
	} else {
		printf("� um ret�ngulo \n");
	}
}
main(){
	setlocale(LC_ALL, "Portuguese");
	int a, b;
	printf("Entre com o valor de a: ");
	scanf("%d", &a);
	printf("Entre com o valor de b: ");
	scanf("%d", &b);
	quadrado(a, b);	
	system("pause");
}
