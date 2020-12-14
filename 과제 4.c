#include <stdio.h>

int plus(int a, int b) {
	int sum = a + b;
	return sum;
}

int minus(int a, int b) {
	int sum = a - b;
	return sum;
}

int times(int a, int b) {
	int sum = a * b;
	return sum;
}

double division(double a, double b) {
	double sum = a / b;
	return sum;
}

int main(void) {
	int a, b;
	char c;
	int result1;
	double result2;
	printf("두 수와 연산자를 입력시오: ");
	scanf_s("%d %d %c", &a, &b, &c);
	switch (c) {
	case '+':
		result1 = plus(a, b);
		printf("%d", result1);
		break;
	case '-':
		result1 = minus(a, b);
		printf("%d", result1);
		break;
	case '*':
		result1 = times(a, b);
		printf("%d", result1);
		break;
	case '/':
		result2 = division(a, b);
		printf("%.2f", result2);
		break;
	}

	return 0;
}