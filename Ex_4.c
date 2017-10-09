/*  Fazer um programa em C para ler o raio R de uma esfera e calcular o volume e a área de uma
esfera.
V = 4/3 * pi * R^3 
A = 4 * pi * R^2
*/
#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	float raio, volume, area;
	printf("Digite o raio: ");
	scanf("%f", &raio);
	
	volume = (raio * raio *raio) * 3.14 * 3 / 4;
	//volume = 4 / 3 * 3.14 * (raio * raio * raio);
	area = (raio * raio) * 4 * 3.14;
	printf("O volume é: %f\n", volume);
	printf("A área é: %f", area);
}
