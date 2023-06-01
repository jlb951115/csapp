#include <stdio.h>
int main()
{
	unsigned uf = 1065353216;
	int sign = (uf&(1<<31));
	int exp = (uf&(0xff<<23));
	int frac = uf - exp - sign;
	int shift = (exp - (0x7f<<23))>>23;
	int a = ((frac>>(23-shift)) + (1<<shift))|(sign>>(30-shift));
}
