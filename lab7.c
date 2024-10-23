#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()

{
	setlocale(LC_CTYPE, "RUS");
	t3();
}
int t1()
{
	char c;
	printf("¬ведите букву 'a' или цифру 'b': ");
	scanf("%c", &c);//считывание с консоли
	switch (c)
	{
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
		printf("введена цифра\n");
		break;
	default:
		printf("введена не цифра(значит буква(или символ какой-то))\n");
	}
	return 0;
}

int t2()
{
	char c;
	float x, y;
	scanf("%f", &x); scanf("%c", &c); scanf("%f", &y);
	switch (c)
	{
	case '+':
		printf(" = % f", x + y);
		break;
	case '-':
		printf(" = % f", x - y);
		break;
	case '*':
		printf(" = % f", x * y);
		break;
	case '/':
		printf(" = % f", x / y);
		break;
	case '^':
		printf("=%f", pow(x,y));
		break;
	default:
		printf("ты что ввел");
	}
	return 0;
}
int t3()
{
	char c;
	float x, y;
	scanf("%c", &c);
	switch (c)
	{
	case 't':
		printf("высота и сторона\n");
		scanf("%f", &x); scanf("%f", &y);
		printf("S=%f", 1.0 / 2 * x * y);
		break;
	case 's':
	case 'r':
		printf("стороны\n");
		scanf("%f", &x); scanf("%f", &y);
		printf("S=%f", x * y);
		break;
	case 'o':
		printf("радиус\n");
		scanf("%f", &x);
		printf("S=%f", x * x * 3.14);
		break;
	default:
		printf("такой фигуры нет или мне было лень ее делать");
	}
	return 0;

}