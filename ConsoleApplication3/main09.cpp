#include <stdio.h>

char* f(size_t n)
{
	const int ch = getchar();
	if (ch == '\n') {
		const auto p = new char[n + 1];//CŒ¾Œê‚Å‚¢‚¤‚Æ‚±‚ë‚Ì malloc(n + 1)
		p[n] = '\0';
		return p;
	}
	else {
		const auto p = f(n + 1);
		p[n] = static_cast<char>(ch);
		return p;
	}
}

int main()
{
	const auto p = f(0);
	delete[] p;// CŒ¾Œê‚Å‚¢‚¤‚Æ‚±‚ë‚Ìfree(p);
}
