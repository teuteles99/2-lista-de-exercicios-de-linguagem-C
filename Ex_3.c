/* Seja N um n�mero quadrado perfeito. Se somarmos os n�meros �mpares consecutivos
(1+3+5+7+9+...) at� que esta soma seja igual a N, o n�mero M de termos somados ser� igual a
raiz quadrada de N.
Exemplo: N = 16 	16 = 1 + 3 + 5 + 7 		M = 4 termos.
Logo, a raiz quadrada de 16 � 4.
Fazer um programa em C para ler um n�mero inteiro e positivo N e responder se N � quadrado
perfeito. */

#include <stdio.h>
#include <locale.h>

main(){
	int num, impares, cont, termo;
	cont = 0;
	termo = 0;
	setlocale(LC_ALL, "Portuguese");
	printf("Digite um n�mero inteiro e positivo: ");
	scanf("%d", &num);
	for (impares = 1; cont < num ; impares = impares + 2){
		//printf("%d ", impares);
		cont = cont + impares;
		termo++;
	}
	printf("\n");
	if (num % termo != 0){
		printf("%d n�o � um quadrado perfeito", num);
	}else{
		printf("%d � um quadrado perfeito", num);
	}
	//printf("\n\n\n%d", termo);
}
