#include <stdio.h>
void g()
{
}
//戻り値     引き数
int        f(int a, int b)
{
	return a + b;
}
int main()
{
	const int x = f(1, 2);
	//g();
}
