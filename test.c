#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ��
int one(){
	int i;
	double sum = 0;
	double tmp = 1;
	int flag = 1;
	for (i = 1; i <= 100; i++){
		tmp = flag * 1.0 / i;
		flag *= -1;
		sum += tmp;
	}

	printf("%lf", sum);
	system("pause");
	return 0;
}

//����1+2!+3!+4!+...+n!
int main(){
	int n = 1;
	printf("������Ҫ��1��?�Ľ׳˺�\n");
	scanf("%d",&n);
	int i;
	int sum = 0;
	int tmp = 1;
	for (i = 1; i <= n; i++){
		tmp *= i;
		sum += tmp;
		printf("%d�Ľ׳�Ϊ%d\n",i,tmp);
	}

	printf("1��%d�Ľ׳˺�Ϊ%d\n",n,sum);
	system("pause");
	return 0;
}