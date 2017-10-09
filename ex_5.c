#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	int voltas, cont, rec_volta;	
	printf("Quantas voltas têm a corrida?\n");
	scanf("%d", &voltas);
	float tempo[voltas], tempo_medio, rec_tempo;
	rec_tempo = 0;
	tempo_medio = 0;
	for(cont = 0; cont < voltas; cont++){
		printf("Insira o tempo de duração da %dª volta: ", cont + 1);
		scanf("%f", &tempo[cont]);
		
		if(tempo[cont] > rec_tempo){
			rec_tempo = tempo[cont];
			rec_volta = cont + 1;
		}
		
		tempo_medio = tempo_medio + (tempo[cont] / voltas);
	}
	printf("\nMelhor Tempo: %f\n", rec_tempo);
	printf("A volta em que o melhor tempo ocorreu: %d\n", rec_volta);
	printf("Tempo médio das %d voltas: %f", voltas, tempo_medio);
}
