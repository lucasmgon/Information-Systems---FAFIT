#include <stdio.h>

int main(){
	int num = 10;
	
	//Pr�-incremento
	printf("++num = %d\n\n", ++num);
	
	//P�s-incremento
	printf("num++ = %d\n\n", num++);
	printf("num = %d\n\n", num);
	
	//Pr�-decremento
	printf("--num = %d\n\n", --num);
	
	//P�s-decremento
	printf("num-- = %d\n\n", num--);
	printf("num = %d", num);
	
	getch();
	return 0;	
}
