//�ú��� ��� 
#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	printf("�ð�, ��, �ʸ� �Է��Ͻʽÿ�.\n");
	scanf("%d %d %d", &a, &b, &c);
	printf("%d�� �Դϴ�.\n", 3600*a + 60*b + c);
	return 0;
}
