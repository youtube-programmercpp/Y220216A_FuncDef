//C++では構造体のことをクラスと言うこともある
struct sample {
	static int a;
	int b;
};

//static メンバ変数を定義する
int sample::a;

int main()
{
	sample x, y;
	x.a = 10;
	x.b = 20;
	y.a = 30;
	y.b = 30;
}
