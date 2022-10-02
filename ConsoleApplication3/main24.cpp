//C++
struct sample {
	//”ñstatic ƒƒ“ƒo
	//ƒƒ“ƒo•Ï” member variables
	int a;
	int b;
	//ƒƒ“ƒoŠÖ” member functions
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
