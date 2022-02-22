//시분초 계산 응용 
#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	printf("아무 초를 입력해주십시오.\n");
	scanf("%d", &a);
	b = a/60;
	c = b/60;
	b = b%60;
	a = a%60;
	printf("%d시간 %d분 %d초", c, a, b);
	return 0;
}
