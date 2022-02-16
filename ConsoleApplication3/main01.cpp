#include <stdio.h>
//formal parameters 仮引数
void f(int a, int b)//関数定義
{
	//処理
	printf("練習用の関数です。\n");
	printf("引き数 a は %d です。\n", a);
	printf("引き数 b は %d です。\n", b);
}
int main()
{
	//actual parameters 実引数
	f(10, 20);//関数呼び出し
	f(50, 60);//関数呼び出し
	int x = 100, y = 200;
	f(x, y);
	f(2 * x, 3 * y);
}
