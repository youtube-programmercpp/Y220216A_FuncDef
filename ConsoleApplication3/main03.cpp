#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int input(const char* prompt)
{
	//prompt ���͑��i�\��
	fputs(prompt, stdout);
	fflush(stdout);
	int n;//�ϐ��錾
	if (scanf("%d", &n) == 1/*�f�[�^�̌�*/)
		return n;
	else {
		fprintf(stderr, "scanf�����s�����̂ŁA����ŏI�����܂��B\n");
		exit(EXIT_FAILURE);
	}
}
int main()
{
	const int a = input("a = ");
	const int b = input("b = ");
	printf("a + b = %d\n", a + b);
}
