#include <stdio.h>
#include <string.h>
int main()
{
	char buf[4];
	// buf[0] = 'A';
	// buf[1] = '\n';
	// buf[2] = '\0';
	if (fgets(buf, sizeof buf, stdin)) {
		const size_t i = strlen(buf) - 1;
		if (buf[i] == '\n')
			buf[i] = '\0';
		printf("入力された文字列：「%s」\n", buf);
	}
}
