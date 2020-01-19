int &f1();
int f2();

int main()
{
	int x = 10;
	int y = 35;
	const int primes[]{ 2, 3, 5, 7, 11, 13, 17, 19, 23, 29 };
	int a[]{ 1, 2, 4 };
	int &r1;//L value verilmediği için geçersizdir.
	int &r2(++x);
	int &r3{ 10 };//R value verildiği için geçersizdir.
	const int &r4{ int() };
	const int &r5{ int{} };//R value verildiği için geçersizdir.
	int &r6 = +y; //R value verildiği için geçersizdir.
	int &r7 = (x, y);//R value verildiği için geçersizdir.
	int &r8 = x > 10 ? x : y;
	int &r9 = f1();
	int &r10 = f2();//R value verildiği için geçersizdir.
	int &r11 = primes[5];
	int const &r12 = *primes;//R value verildiği için geçersizdir.
	const int &r13{ x };
	int *&r14 = a;
	int(&r15)[] = a;
	int(&r16)[3] = a;
}

