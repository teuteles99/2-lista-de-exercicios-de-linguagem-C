/* 	Faça um programa que determina o máximo e o mínimo de um conjunto
 de n números inteiros armazenados num vetor A de 10 elementos. */
 #include <stdio.h>
 #include <locale.h>
 
 int main(){
 	setlocale(LC_ALL, "Portuguese");
 	int conj[10];
 	int cont, maximo, minimo;
 	maximo = 0;
	for (cont = 0; cont < 10; cont++){
		printf("Insira o %d° número: ", cont + 1);
		scanf("%d", &conj[cont]);
		
		if (cont == 0){
			minimo = conj[cont];
		}
		if (conj[cont] > maximo){
			maximo = conj[cont];
		}
		if (conj[cont] < minimo){
			minimo = conj[cont];
		}
	}
	printf("\n\nO numero máximo é: %d\n", maximo);
	printf("O numero mínimo é: %d", minimo);
 }
