#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int input(const char* prompt)
{
	//prompt 入力促進表示
	fputs(prompt, stdout);
	fflush(stdout);
	int n;//変数宣言
	if (scanf("%d", &n) == 1/*データの個数*/)
		return n;
	else {
		fprintf(stderr, "scanfが失敗したので、これで終了します。\n");
		exit(EXIT_FAILURE);
	}
}
int main()
{
	const int a = input("a = ");
	const int b = input("b = ");
	printf("a + b = %d\n", a + b);
}
