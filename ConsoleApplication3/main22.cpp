//C++の例 二つの値を返す
#include <iostream>
#include <array>
//配列を返す
std::array<int, 2> f()
{
	int a, b;
	std::cin >> a >> b;
	return {a, b};
}
int main()
{
	auto data = f();
	std::cout << "入力された二つの値：{ " << data[0] << ", " << data[1] << "}\n";
}
