struct pair {
	int a;
	int b;
};
struct pair f()
{
	//compound literal (C99)
	return (struct pair){ 100, 200 };
}
int main()
{
	struct pair y = f();
}
