#include <stdio.h>
extern "C" char* gets(char*);//ŠÖ”éŒ¾
int main()
{
	char buf[512];
	gets(buf);
	printf("“ü—Í‚³‚ê‚½•¶š—ñ‚Íu%sv‚Å‚·B\n", buf);
}
