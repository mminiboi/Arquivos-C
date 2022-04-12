#include<stdio.h>
#include<locale.h>

triangulo(int ladoa, int ladob, int ladoc){
	if ((ladoa == ladob) && (ladob == ladoc)){
		printf("Triângulo equilátero \n");
	} else {
		if ((ladoa == ladob) || (ladoa == ladoc) || (ladob == ladoc)){
			printf("Triângulo isósceles \n");
		} else {
			printf("Triângulo escaleno \n");
		}
	}
}

main(){
	setlocale(LC_ALL, "Portuguese");
	int a, b, c;
	printf("Entre com o valor de a: ");
	scanf("%d", &a);
	printf("Entre com o valor de b: ");
	scanf("%d", &b);
	printf("Entre com o valor de c: ");
	scanf("%d", &c);
	triangulo(a, b, c);	
	system("pause");
}
