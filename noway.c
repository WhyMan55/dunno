#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define N 10000

void main()
{
	t5();
}

int t1()
{
	int k = 0, l=0;
	float a[N] = { 1,0,4,5,7,0,1,6,7,9, 0, 1,1 ,0 }, b[N], c=1;
	for (int i = 0; i < N; i++)
	{
		if (a[i] == 0)
		{
			k = !k;
			l++;
		}
		if (l > 2)
			break;
		if (k !=0 && a[i]!=0)
		{
			c *= a[i];
		}
	}
	printf("\n%f", c);
}

int t2()
{
	int array[N] = { 3, -1, 0, 5, -2 };
	int size = sizeof(array) / sizeof(array[0]);
	int type; 
	printf("type(1 for pos; -1 for neg; 0 for 0)");
	scanf("%d", &type);

	int index = t21(array, size, type);

	if (index != -1) {
		printf("index is %d\n", index);
	}
	else {
		printf("no elements\n");
	}

	return 0;
}

int t21(int* array, int size, int type) {
	for (int i = 0; i < size; i++) {
		if ((type == 1 && array[i] > 0))
		{
			return i; break;
		}
		if (type == -1 && array[i] < 0)
		{
			return i; break;
		}
		if (type == 0 && array[i] == 0) {
			return i; break;
		}
	}
	return -1;
}

int t3()
{
	struct vroom {
		char name[18];
		char manufacturer[18];
		char type[24];
		int made_in;
		int reg_date;
	};
	struct vroom a[10];
	int n, m;
	char x[20], v[20], z[20];
	a[0].reg_date = 2006;
	strcpy(a[0].name, "Corolla");
	strcpy(a[0].manufacturer, "Toyota");
	strcpy(a[0].type, "the fast one");
	a[0].made_in = 1939;
	a[1].reg_date = 2008;
	strcpy(a[1].name, "Corolla");
	strcpy(a[1].manufacturer, "Toyota");
	strcpy(a[1].type, "the old one");
	a[1].made_in = 1939;
	a[2].reg_date = 50000;
	strcpy(a[2].name, "Corolla 2");
	strcpy(a[2].manufacturer, "Toyoter");
	strcpy(a[2].type, "the new one");
	a[2].made_in = 3000;
	a[3].reg_date = 2007;
	strcpy(a[3].name, "Trueno");
	strcpy(a[3].manufacturer, "Toyota");
	strcpy(a[3].type, "the default one");
	a[3].made_in = 1986;
	a[4].reg_date = 2005;
	strcpy(a[4].name, "Vroom");
	strcpy(a[4].manufacturer, "VAZ");
	strcpy(a[4].type, "doesn't matter");
	a[4].made_in = 1960;
	printf("input the 6th one yourself\n");
		printf("reg date ");
		scanf("%d", &n);
		printf("what year was it made in ");
		scanf("%d", &m);
		printf("name ");
		scanf("%s;", &x);
		printf("manufacturer ");
		scanf("%s;", &z);
		printf("type ");
		scanf("%s;", &v);
		a[5].reg_date = n;
		strcpy(a[5].name, x);
		strcpy(a[5].manufacturer, v);
		strcpy(a[5].type, z);
		a[5].made_in = m;
	for (int i = 0; i < 6; i++)
	{
		if ((strcpy(a[i].manufacturer, "Toyota")) && a[i].reg_date<2007)
		{
			printf(" %d ", a[i].reg_date);
			printf(" %s ", a[i].name);
			printf(" %s ", a[i].manufacturer);
			printf(" %s ", a[i].type);
			printf(" %d \n", a[i].made_in);
		}
	}
}

void remove_first_letter(char* str) {
		char result[N] = { 0 };
		int i = 0, j = 0;
		int inword = 0; 
		while (str[i] != '\0') {
			if (isspace(str[i]) || str[i] == '\n') {
				result[j++] = str[i];
				inword = 0;
			}
			else {
				if (!inword) {
					inword = 1;
				}
				else {
					result[j++] = str[i];
				}
			}
			i++;
		}
		result[j] = '\0';
		strcpy(str, result);
	}
int t5() {
	char input[N];
	fgets(input, sizeof(input), stdin);
	remove_first_letter(input);
	printf("%s", input);
}
