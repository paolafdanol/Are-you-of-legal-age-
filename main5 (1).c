#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a;
	printf("¿cual es tu edad?\n");
	scanf("%d",&a);
	
	if(a>18){
		printf("eres mayor de edad.");
	}
	
	else{
	printf("eres menor de edad.");
}
	return 0;
}
