//�� ī���� ���� 
#include <conio.h>  //getch, putch ��  
#include <windows.h>  //system, Sleep, SetConsoleCursorPosition �� 
#include <stdio.h>  //printf, scanf �� 
#include <time.h>  //time �� 
#include <stdlib.h>  //rend, srand �� 

#define STAR "��"  //Ư�� ��ȣ ���ڿ�"��"�� ��ũ�� ��� 
#define INTERVAL 300  //�� ��¦���� �ֱ�(ms) 
#define MIN 5  //�ּ� �� ��¦�� Ƚ�� 
#define MAX 12  //�ִ� �� ��¦�� Ƚ�� 

void gotoxy( int x, int y );  //Ŀ����(x, y)��ǥ�� �̵� 
void draw_rectangle( int, int, int, int );  //���� ��Ÿ�� ������ �׵θ� �׸��� 

int main()
{
	int input;  //������ �ϴ� ����ڰ� �Է��� �� ��¦�� Ƚ�� 
	int repeats;  //���� ���� ��¦�� Ƚ�� 
	int start_x = 10;  //�簢�� ���� ���� ��� x��ǥ 
	int start_y = 3;  //�簢�� ���� ���� ��� y��ǥ 
	int width = 50;  //���� ��Ÿ�� �簢�� ������ ���� �� 
	int height = 10;  //���� ��Ÿ�� �簢�� ������ ���� ���� 
	int x, y, i;  //���� ���� ��Ÿ�� ��ǥ
	
	//���� ���� �� �ȳ����� ��� �� ��� ���
	printf("���� ��¦�̴� Ƚ���� ���ߴ� �����Դϴ�. �ƹ� Ű�� ������ �����մϴ�.");
	getch();  //������ Ű�� ������ ������ �����ϵ��� ��ٸ��� ��
	
	system("cls");  //ȭ�� ����� 
	Sleep(1000);  //���� getch()���� Ű�� �����ڸ��� ���ڱ� ������� �ʵ��� ���α׷� ������ 1000�и��ʵ��� ��� �ߴ��ϱ� 
	
	srand(time(NULL));  //rand�Լ��� seed�� �����ð����� ����
	
	//�� ��¦�� Ƚ���� �ּ�MIN������ �ִ�MAX�� �� ������ ������ ��� �����ϱ�
	repeats = rand() % (MAX - MIN+1) + MIN;
	
	//���� ��Ÿ�� ���� �ð��� �簢�� �ٱ����� �׵θ��� �׸� �� 1�ʰ� �����ϱ�
	draw_rectangle(start_x, start_y, width, height);
	Sleep(1000);
	
	//���� ��Ÿ�� ���� �ȿ��� ������ (x, y)��ǥ�� INTERVAL�������� ���� repeats�� �����̱�
	for(i = 1; i<=repeats; i++)
	{
		//rand�Լ��� �̿��Ͽ� ���� ��Ÿ��(x, y)��ǥ ���ϱ�
		//"��"�� �� ĭ�� ���������� �Ϲ� ���ڸ� ����� ������ �ִ� x��ǥ�� 1�� �� ����� �Ѵ�.
		x = start_x + rand()%(width - 2);
		y = start_y + rand()%(height - 1);
		
		//���� (x, y) ��ǥ�� ǥ���� �� INTERVAL�и��ʵ��� �����ϱ�
		gotoxy(x, y);
		printf("%s", STAR);
		Sleep(INTERVAL);
		
		//(x, y)��ǥ�� �ִ� �� �����
		gotoxy(x, y);
		printf("%s", "  ");
		Sleep(INTERVAL);
	}
	
	//����ڿ��� �� ��¦�� Ƚ���� ��� ���� �Է¹ޱ�
	gotoxy(10, 21);
	printf("���� �� ��(%d ~ %d��) ��¦������?   ", MIN, MAX);
	scanf("%d", &input);
	
	//����ڰ� ���� Ƚ���� ���� ������ ������� Ʋ�ȴ��� �޼��� ����ϱ�
	gotoxy(10, 22);
	if (input == repeats)
		printf("�¾ҽ��ϴ�!\n");
	else
		printf("��Ƚ��ϴ�! ���� %d�� �Դϴ�!\n", repeats);
		
	return 0;
}
	 
/* (start_x, start_y)��ǥ�����ϴ� ���� ���� width�̰�, ���� ���̰� heigth�� �簢�� �ٱ����� �׵θ��� �׸��� �Լ�*/
void draw_rectangle(int start_x, int start_y, int width, int height)
{
	int col, row;
	
	//�簢�� �� ��輱 �׸���
	gotoxy(start_x -1, start_y -1);
	for (col = 0; col<=width+1; col++)
	putch('~');
	
	//�簢�� �Ʒ� ��輱 �׸��� 
	gotoxy(start_x -1, start_y + height);
	for (col = 0; col<=width+1; col++)
	putch('~');
	
	//�簢�� ���� ���� '|'�׸���
	for (row = 0; row<height; row++) 
	{
		gotoxy(start_x -1, start_y + row);
		putch('|');
	}
	
	//�簢�� ������ ���� '|'�׸���
	for (row = 0; row<height; row++) 
	{
		gotoxy(start_x + width, start_y + row);
		putch('|');
	}
}

//Ŀ���� (x, y)��ǥ�� �̵��ϴ� �Լ�
void gotoxy(int x, int y)
{
	COORD Cur;
	Cur.X = x;
	Cur.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	
}
