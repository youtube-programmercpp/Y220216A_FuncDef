#include <stdio.h>
//formal parameters ������
void f(int a, int b)//�֐���`
{
	//����
	printf("���K�p�̊֐��ł��B\n");
	printf("������ a �� %d �ł��B\n", a);
	printf("������ b �� %d �ł��B\n", b);
}
int main()
{
	//actual parameters ������
	f(10, 20);//�֐��Ăяo��
	f(50, 60);//�֐��Ăяo��
	int x = 100, y = 200;
	f(x, y);
	f(2 * x, 3 * y);
}
