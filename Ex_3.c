/* Seja N um número quadrado perfeito. Se somarmos os números ímpares consecutivos
(1+3+5+7+9+...) até que esta soma seja igual a N, o número M de termos somados será igual a
raiz quadrada de N.
Exemplo: N = 16 	16 = 1 + 3 + 5 + 7 		M = 4 termos.
Logo, a raiz quadrada de 16 é 4.
Fazer um programa em C para ler um número inteiro e positivo N e responder se N é quadrado
perfeito. */

#include <stdio.h>
#include <locale.h>

main(){
	int num, impares, cont, termo;
	cont = 0;
	termo = 0;
	setlocale(LC_ALL, "Portuguese");
	printf("Digite um número inteiro e positivo: ");
	scanf("%d", &num);
	for (impares = 1; cont < num ; impares = impares + 2){
		//printf("%d ", impares);
		cont = cont + impares;
		termo++;
	}
	printf("\n");
	if (num % termo != 0){
		printf("%d não é um quadrado perfeito", num);
	}else{
		printf("%d é um quadrado perfeito", num);
	}
	//printf("\n\n\n%d", termo);
}
