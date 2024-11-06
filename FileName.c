#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void main()
{
	int a, b[9999],t;
	float d,c,avrg;
	char h;
	printf("default time is 2 minutes, do you want to change it? (Y/y to change, anything else to use default time) ");
	scanf("%c", &h);
	h = tolower(h);
	switch (h) {
	case 'y': printf("enter time in minutes: ");
		scanf("%d", &t);
	default: t = 2;
	}
	printf("enter the amount of units: ");
	c = 0;
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		int k;
		printf("%d - ", i + 1);
			scanf("%d", &k);
			b[i] = k;
			c += k;
	}
	avrg = c / t / a;
	if (avrg / 200 != 1)
		if (avrg / 200 < 0.5 || avrg / 200 > 1.5)
			printf("error (%.2f percent difference between average and default)", fabs(100. - avrg / 200. * 100.));
		else printf("warning (%.2f percent difference between average and defalut)", fabs(100. - avrg / 200. * 100.));
	else printf("average is identical to reference value");

	printf("\n\nhistogram\n");
	for (int i = 0; i < a; i++) {
		printf("unit %d |", i + 1);
		for (int g = 0; g < b[i] / 50; g++) {
			float k = b[i];
				printf("[]");
				if (g == b[i] / 50 - 1 && k / 50 > b[i] / 50) printf("]");
		}
		if (b[i] < 50) printf("]");
		printf(" %d\n", b[i]);
	}
}