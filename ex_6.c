#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	int num, qtd, cont;
	printf("Digite um n�mero: ");
	scanf("%d", &num);
	printf("Digite a quantidade de primeiros m�ltiplos: ");
	scanf("%d", &qtd);
	//resultado[qtd];
	
	printf("Os primeiros m�ltiplos de %d �: ", num);
	for(cont = 0; cont < qtd; cont++){
		//resultado[cont] = num * cont;
		printf("%d  ", num * cont);
	}
}
