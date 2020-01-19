#### Aşağıdaki C++ kodu hakkında yorum yapınız

+ Kodda sentaks hatası (hataları) var.
+ Kod tanımsız davranış *(undefined behavior)* niteliğinde.
+ Kod derlenip çalıştırıldığında ekran çıktısı ................... olur.

```
int &f2(int &r1, int &r2)
{
	r1 += r2; //r1 15 r2 5 r2 21 r1 16
	return r1;
}

void f1(int &r1, int &r2)
{
	r1 *= r2; //r1 10 r2 5
	++f2(r1, r2); //r1 16
	++f2(r2, r1); //r2 22
}

#include <iostream>

int main()
{
	int x = 2, y = 5;

	f1(x, y);

	std::cout << x << " " << y << "\n"; //Çıktısı 16 22 
}

```
