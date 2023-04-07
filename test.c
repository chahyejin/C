/*
1. char short int -%d long -%ld
2. float - %f double -%lf
3. char - %c
*/

#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void)
{
	//4
	/*int a, b;
	printf("두 수를 입력하세요 : ");
	scanf_s("%d %d", &a, &b);

	printf("%d+%d=%d\n", a, b, a + b); 
	printf("%d-%d=%d\n", a, b, a - b);
	printf("%d*%d=%d\n", a, b, a * b);
	printf("%d/%d=%d\n", a, b, a / b);*/


	//5
	/*int a;
	float b;

	printf("두 수를 입력하세요 : ");
	scanf("%d %f", &a, &b);

	printf("출력 1 : %d, %.2f\n", a, b);
	printf("출력 2 : %.2f, %d\n", b, a);*/

	//6
	char name[20] = { 0 };
	char input;

	printf("알파벳 하나와 이름을 입력하세요 : ");
	scanf("%c %s", &input, name);
	
	if (1) {
		printf("TEST\n");
		printf("%c %s", input, name);
	}

 return 0;
}