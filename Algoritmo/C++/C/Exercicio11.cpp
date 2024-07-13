#include <stdio.h>

int main(void){
	
	float x, y;
	char c;
	
	printf("Digite a expressao: ");
	scanf("%f %c %f", &x, &c,&y);
	switch(c){
		case '+':{
			printf("Valor = %.2f\n", x+y);
			break;
		}
		case '-':{
			printf("Valor = %.2f\n", x-y);
			break;
		}
		default:{
			if(c == ':' || c == '/'){
				if(x == 0 || y == 0){
					printf("Divisao por 0 � impossivel.");
				}else{
					printf("Valor = %.2f\n", x/y);
				}
			}else if( c == 'x' || c == '*'){
				printf("Valor = %.2f\n", x*y);
			}else{
				printf("Operador invalido: %c\n", c);
			}
			break;
		}
	}
}
