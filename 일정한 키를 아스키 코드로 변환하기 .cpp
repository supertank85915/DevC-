//������ Ű�� �ƽ�Ű �ڵ�� ��ȯ�ϱ� 
#include <stdio.h>
#include <conio.h>

#define ENTER 13

int main( void )
{
	int ch;
	int i = 0;
	
	printf("�ƽ�Ű �ڵ�� ��ȯ�� Ű�� ��������...\n");
	printf("Enter Ű�� ������ ���α׷��� ����˴ϴ�.\n");
	
	do
	{
		ch = getch();  //getch�Լ��� �ϳ��� Ű�� �Է¹޴� �Լ���.(scanf) 
		
		printf("(%d), ���� : (%d), �ƽ�Ű �ڵ� = (%d) \n", i++, ch, ch);
		
	}while( ch != ENTER);
	return 0;	
}
