#include <string>
#include <iostream>
int main()
{
	std::string s;
	if (std::getline(std::cin, s)) {
		std::cout << "入力された文字列は「" << s << "」です。\n";
	}
}
