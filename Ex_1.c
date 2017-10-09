/*Fazer um programa ler um vetor de inteiros e positivos e 
imprimir quantas vezes aparece o número 1, 3 e 4, nesta ordem.
 O vetor terá no máximo 100 posições. Sair do programa quando 
 for digitado -1.*/
 
#include <stdio.h>
#include <locale.h>

main(){
	int vetor[100];
	int cont;
	int result = 0;
	setlocale(LC_ALL, "Portuguese");
	printf("Insira um conjunto de vetores de no máximo 100 posições\n");
	for (cont = 0; cont < 100; cont++){
		scanf("%d", &vetor[cont]);
			while(vetor[cont] < 0 && vetor[cont] != -1){
				printf("Tente novamente!\n");
				scanf("%d", &vetor[cont]);
			}
		if (vetor[cont] == -1){
			break;
		}
		if (vetor[cont] == 4 && vetor[cont -1] == 3  && vetor[cont -2] == 1){
			result++;
		}
	}
	printf("O número 1, 3 e 4 foram inseridos nesta ordem %d vezes.", result);
}
