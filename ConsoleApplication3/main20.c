#include <stdio.h>
void g()
{
}
//�߂�l     ������
int        f(int a, int b)
{
	return a + b;
}
int main()
{
	const int x = f(1, 2);
	//g();
}
