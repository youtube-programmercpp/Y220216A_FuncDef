//C++�̗� ��̒l��Ԃ�
#include <iostream>
#include <array>
//�z���Ԃ�
std::array<int, 2> f()
{
	int a, b;
	std::cin >> a >> b;
	return {a, b};
}
int main()
{
	auto data = f();
	std::cout << "���͂��ꂽ��̒l�F{ " << data[0] << ", " << data[1] << "}\n";
}
