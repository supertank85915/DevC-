//�ú��� ��� ���� 
#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	printf("�ƹ� �ʸ� �Է����ֽʽÿ�.\n");
	scanf("%d", &a);
	b = a/60;
	c = b/60;
	b = b%60;
	a = a%60;
	printf("%d�ð� %d�� %d��", c, a, b);
	return 0;
}
