//УКАЗАНИЕ ПРОТОТИПОВ БИБЛИОТЕЧНЫХ ФУНКЦКИЙ
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(void)
{   //ОБЪЯВЛЕНИЕ ПЕРЕМЕННЫХ
	double x;
	double s1; //переменная s1
	double s2;
	double s3;
	double s4;
	double s5;
	double s6;
	double s7;
	double y;
	scanf_s("%lf", &x);//ВВОД x
	//ПРОМЕЖУТОЧНЫЕ ВЫЧИСЛЕНИЯ
	s1 =pow(x, 2);
	s2 = x;
	s3 = 1 / s1;
	s4 = fabs(x - s3);
	s5 = cos(x);
	s6 = log(fabs((tan(x) - x)));
	s7 = s5 / s6;
	y = s4 - s7;
	//ВЫВОД РЕЗУЛЬТАТОВ ПРОМЕЖУТОЧНЫХ ВЫЧИЛЕНИЙ ДЛЯ ПРОВЕРКИ ПРАВИЛЬНОСТИ РЕШЕНИЯ
	printf("s1=%lf   ", s1);
	printf("s2=%lf   ", s2);
	printf("s3=%lf   ", s3);
	printf("s4=%lf   ", s4);
	printf("s5=%lf   ", s5);
	printf("s6=%lf   ", s6);
	printf("s7=%lf   ", s7);
	//ВВЫВОД y
	printf("y=%lf   ", y);
	return(0);
}
