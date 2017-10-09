/* Suponha um vetor N com 10 elementos e outro vetor M com 10 elementos. 
Faça um programa em C que calcule o produto escalar P de A por B. 
(Isto é, P = A[1]*B[1] + A[2]*B[2] + ... A[N]+B[N]).	*/

#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	int n[10];
	int m[10];
	int p, cont;
	p = 0;
	for (cont = 0; cont < 10; cont++){
		printf("Digite o %d° elemento do vetor N: ", cont + 1);
		scanf("%d", &n[cont]);
	}
	printf("\n");
	for (cont = 0; cont < 10; cont++){
		printf("Digite o %d° elemento do vetor N: ", cont + 1);
		scanf("%d", &m[cont]);
	}
	for (cont = 0; cont < 10; cont++){
	p = (n[cont] * m[cont]) + p;
	}

	printf("\nO produto escalar P de 'N' por 'B' é: %d", p);
}
