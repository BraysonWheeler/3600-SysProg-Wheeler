#include "major1.h"

int parity(int x)
{
	
	int x2= x ^ (x >> 1);
	x2 = x2 ^ (x2 >> 2);
	x2 = x2 ^ (x2 >> 4);
	x2 = x2 ^ (x2 >> 8);
	x2 = x2 ^ (x2 >> 16);
	
	return (x2&1);
}