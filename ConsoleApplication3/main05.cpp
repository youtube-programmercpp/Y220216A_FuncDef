#include <stdio.h>
extern "C" char* gets(char*);//関数宣言
int main()
{
	char buf[512];
	gets(buf);
	printf("入力された文字列は「%s」です。\n", buf);
}
