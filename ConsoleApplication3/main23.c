//CŒ¾Œê
struct sample {
	int a;
	int b;
};
void clear(struct sample* p)
{
	p->a = p->b = 0;
}
void add_50(struct sample* p)
{
	p->a += 50;
	p->b += 50;
}
int main()
{
	struct sample x;
	clear(&x);
	x.b = 100;
	add_50(&x);
}
