#include <stdio.h>
extern "C" char* gets(char*);//�֐��錾
int main()
{
	char buf[512];
	gets(buf);
	printf("���͂��ꂽ������́u%s�v�ł��B\n", buf);
}
