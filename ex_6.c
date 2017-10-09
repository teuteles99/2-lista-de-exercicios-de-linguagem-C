#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	int num, qtd, cont;
	printf("Digite um número: ");
	scanf("%d", &num);
	printf("Digite a quantidade de primeiros múltiplos: ");
	scanf("%d", &qtd);
	//resultado[qtd];
	
	printf("Os primeiros múltiplos de %d é: ", num);
	for(cont = 0; cont < qtd; cont++){
		//resultado[cont] = num * cont;
		printf("%d  ", num * cont);
	}
}
