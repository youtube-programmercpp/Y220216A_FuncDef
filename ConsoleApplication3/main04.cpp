#include <stdio.h>
int main()
{
	printf("���������͂��Ă��������B�R�����ȏ���͂��Ă͂����܂���B\n");
	char buf[4];//3���� + Null����
	if (scanf_s("%s", buf, (unsigned)sizeof buf) == 1) {
		printf("���͂��ꂽ������́u%s�v�ł��B\n", buf);
	}
	else
		printf("���̓G���[\n");
}
