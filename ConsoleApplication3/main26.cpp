//C++�ł͍\���̂̂��Ƃ��N���X�ƌ������Ƃ�����
struct sample {
	static int a;
	int b;
};

//static �����o�ϐ����`����
int sample::a;

int main()
{
	sample x, y;
	x.a = 10;
	x.b = 20;
	y.a = 30;
	y.b = 30;
}
