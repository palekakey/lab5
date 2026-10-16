#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

double task(double a, double x, double y);

int main() {
	setlocale(LC_ALL, ".UTF8");
	double x, y, z, a;

	printf("Введите значение x: ");
	scanf("%lf", &x);

	printf("Введите значение y: ");
	scanf("%lf", &y);

	printf("Введите значение z: ");
	scanf("%lf", &z);

	a = task(x, y, z);
	printf("%.6f", a);


	return 0;
}

double task(double x, double y, double z) {
	double task;
	task = pow(2, -x) * sqrt(x + pow(fabs(y), 0.25)) * exp((x - 1.0 / sin(z)) / 3);
	return task;
}
