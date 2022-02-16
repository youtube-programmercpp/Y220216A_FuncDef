#include <stdio.h>
void f(int i)
{
	if (i < 5)
		f(i + 1);
	printf("%d\n", i);
}

int main()
{
	f(0);
}
