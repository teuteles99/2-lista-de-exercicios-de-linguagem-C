/*Fazer um programa em C para ler uma quantidade N de alunos. 
Ler a nota de cada um dos N alunos e calcular a média aritmética
das notas. Contar quantos alunos estão com a nota acima de 5.0. 
Obs.: Se nenhum aluno tirou nota acima de 5.0, imprimir mensagem:
Não há nenhum aluno com nota acima de 5.*/
#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	int qtd, cont, acima;
	acima = 0;
	printf("Deseja calcular a média de quantos alunos?: ");
	scanf("%d", &qtd);
	float nota[qtd], media;
	media = 0;
	for(cont = 0; cont < qtd; cont++){
		printf("Insira a nota do aluno %d: ", cont + 1);
		scanf("%f", &nota[qtd]);
		if(nota[qtd] >= 5.0){
			acima++;
		}
		media = media + (nota[qtd] / qtd); 
	}
	printf("\n\n");
	printf("A média dos alunos é: %.2f\n", media);
	if(acima == 0){
		printf("Não há nenhum aluno com nota acima de 5");
	}else{
		printf("%d alunos tiraram nota acima de 5", acima);
	}
	
}
