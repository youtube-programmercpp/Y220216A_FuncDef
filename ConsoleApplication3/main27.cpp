//�֐��|�C���^�o�R�Ŋ֐����Ăԁi�R�[���o�b�N�֐����Ăԁj
void h( void (*function_pointer)()   )
{
	(*function_pointer)();
}
struct sample {
	int x;
	static void f();//�I�u�W�F�N�g�s�݂̒��Ŏg����֐�
	void g();
};
void h( void (sample::*function_pointer)()   , sample* p)
{
	(p->*function_pointer)();
}
#include <iostream>
void sample::f()
{
	//static �����o�֐��Ȃ̂Ŕ� static �����o�ϐ��� x �ɃA�N�Z�X�s��
}
void sample::g()
{
	//��static �����o�֐��Ȃ̂Ŕ�static�����o�ϐ��� x �ɃA�N�Z�X�ł���
	std::cout << x << '\n';
}
int main()
{
	sample s;
	s.x = 500;
	s.g();
	h( sample::f);//static �����o�֐��Ȃ̂ŉ\
	h(&sample::g, &s);//��static �����o�֐��Ȃ̂ŕs��

}
