//C++
struct sample {
	//��static �����o
	//�����o�ϐ� member variables
	int a;
	int b;
	//�����o�֐� member functions
	void clear()
	{
		(*this).a = b = 0;
	}
	void add_50()
	{
		this->a += 50;
		(* this).b += 50;
	}
};
int main()
{
	sample x;
	x.clear();
	x.b = 100;
	x.add_50();
}
