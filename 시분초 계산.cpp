//시분초 계산 
#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	printf("시간, 분, 초를 입력하십시오.\n");
	scanf("%d %d %d", &a, &b, &c);
	printf("%d초 입니다.\n", 3600*a + 60*b + c);
	return 0;
}
