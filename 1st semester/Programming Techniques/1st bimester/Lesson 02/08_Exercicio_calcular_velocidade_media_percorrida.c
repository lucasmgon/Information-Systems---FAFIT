#include <stdio.h>
#include <locale.h>

int main(){
	float distancia, tempo, velocidade;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Informe a dist�ncia (KM): ");
	scanf("%f", &distancia);
	
	printf("Informe o tempo (Horas): ");
	scanf("%f", &tempo);
	
	velocidade = distancia / tempo;
	
	printf("A velocidade m�dia ser� de %.2f km/h", velocidade);
	
	getch();
	return 0;
}
