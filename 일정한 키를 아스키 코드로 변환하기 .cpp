//일정한 키를 아스키 코드로 변환하기 
#include <stdio.h>
#include <conio.h>

#define ENTER 13

int main( void )
{
	int ch;
	int i = 0;
	
	printf("아스키 코드로 변환할 키를 누르세요...\n");
	printf("Enter 키를 누르면 프로그램은 종료됩니다.\n");
	
	do
	{
		ch = getch();  //getch함수는 하나의 키를 입력받는 함수다.(scanf) 
		
		printf("(%d), 문자 : (%d), 아스키 코드 = (%d) \n", i++, ch, ch);
		
	}while( ch != ENTER);
	return 0;	
}
