#include <stdio.h>

int main() {
/*
    asm volatile("mov %eax,$1"::);

	register int eax asm("eax");
	printf("%p", eax);
*/
unsigned int src = 0;
unsigned int dst = 0;   

asm ("mov %0, %%eip"
    : "=r" (dst) 
    : "r" (src));

printf("%p\n", dst);

	return 0;
}
