#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	float A;
	scanf("%f", &A);
	printf("%6.2f", ((int)(A*10)-10*(int)A)*100  +  ((int)(A*100)-10*(int)(A*10))*10  +  (int)(A*1000)-10*(int)(A*100)  +  ((int)A)/100.0);
}