//bmi ��� ���α׷� 
#include <stdio.h>

int main(void)
{
	float a = 0;
	float b = 0;
	float c = 0;
	printf("Ű�� �Է��Ͻʽÿ�.\n");
	scanf("%f", &a);
	a = a/100;
	printf("�����Ը� �Է��Ͻʽÿ�.\n");
	scanf("%f", &b);
	printf("����� bmi�� %.2f�Դϴ�.", b/(a*a));
	c = b/(a*a);
	if(c<20)
	{
		printf("����� ��ü�� �Դϴ�.");
	}
	else if(c>20 && c<24)
	{
		printf("����� ���� �Դϴ�.");
	}
	else if(c>24 && c<30) 
	{
		printf("����� ��ü�� �Դϴ�.");
	}
	else if(c>30)
	{
		printf("����� �� �Դϴ�.");
	}
	return 0;
}
