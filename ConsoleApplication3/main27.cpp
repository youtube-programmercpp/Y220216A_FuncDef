//関数ポインタ経由で関数を呼ぶ（コールバック関数を呼ぶ）
void h( void (*function_pointer)()   )
{
	(*function_pointer)();
}
struct sample {
	int x;
	static void f();//オブジェクト不在の中で使える関数
	void g();
};
void h( void (sample::*function_pointer)()   , sample* p)
{
	(p->*function_pointer)();
}
#include <iostream>
void sample::f()
{
	//static メンバ関数なので非 static メンバ変数の x にアクセス不可
}
void sample::g()
{
	//非static メンバ関数なので非staticメンバ変数の x にアクセスできる
	std::cout << x << '\n';
}
int main()
{
	sample s;
	s.x = 500;
	s.g();
	h( sample::f);//static メンバ関数なので可能
	h(&sample::g, &s);//非static メンバ関数なので不可

}
