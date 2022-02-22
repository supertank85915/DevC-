//bmi 계산 프로그램 
#include <stdio.h>

int main(void)
{
	float a = 0;
	float b = 0;
	float c = 0;
	printf("키를 입력하십시오.\n");
	scanf("%f", &a);
	a = a/100;
	printf("몸무게를 입력하십시오.\n");
	scanf("%f", &b);
	printf("당신의 bmi는 %.2f입니다.", b/(a*a));
	c = b/(a*a);
	if(c<20)
	{
		printf("당신은 저체중 입니다.");
	}
	else if(c>20 && c<24)
	{
		printf("당신은 정상 입니다.");
	}
	else if(c>24 && c<30) 
	{
		printf("당신은 과체중 입니다.");
	}
	else if(c>30)
	{
		printf("당신은 비만 입니다.");
	}
	return 0;
}
