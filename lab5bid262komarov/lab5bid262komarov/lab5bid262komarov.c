#define _CRT_SECURE_NO_DEPRECATE
#define _USE_MATH_DEFINES 
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#include <stdio.h>
#define M_PI 3.14159265358979323846

int task1() {
	float gr,agl;
	printf("Введите значение угла в градусах для вычисления синуса: \n");
	scanf("%f", &gr);
	agl = gr * M_PI / 180;
	printf("%.6f", sin(agl));
	return 0;
}

int task2() {
	//var 10
	int c;
	float x, y = -4.14, t = 0.3, b, a;
	printf("Введите значение х (дробная часть ч.з запятую): \n");
	scanf("%f", &x);
	b = x * pow(t,2) + pow(x,1./2);
	a = log10(fabs(t * x + pow(t, 2)));
	y = log(pow(a,2)/(a+b));
	printf("b = %.2f, a = %.2f, y = %.2f\n",b,a,y);
	c = ((int)a % 2 + (int)b % 2 == 1) && ((int)a%3 + (int)b % 3+ (int)y % 3 == 0);
	printf("условие выполнено (1 - да, 0 - нет): %d", c ) ; //выводит 1 при x = 9
	return 0;
}

int main() {
	setlocale(LC_ALL, ".UTF8");
	task2();
	return 0;
}
