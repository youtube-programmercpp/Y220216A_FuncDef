#include <string>
#include <iostream>
int main()
{
	std::string s;
	if (std::getline(std::cin, s)) {
		std::cout << "���͂��ꂽ������́u" << s << "�v�ł��B\n";
	}
}
