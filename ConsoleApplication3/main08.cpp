#include <stdio.h>
void f(const char* s)
{
	if (*s != '\0') {
		f(s + 1);
		putchar(*s);
	}
}


int main()
{
	f("TEST");
}
