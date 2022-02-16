#include <stdio.h>
int main()
{
	printf("文字列を入力してください。３文字以上入力してはいけません。\n");
	char buf[4];//3文字 + Null文字
	if (scanf_s("%s", buf, (unsigned)sizeof buf) == 1) {
		printf("入力された文字列は「%s」です。\n", buf);
	}
	else
		printf("入力エラー\n");
}
