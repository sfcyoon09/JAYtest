#include <stdio.h>

int asm_rsb_ex(int x, int y);

asm("						\n\
.global asm_rsb_ex			\n\
asm_rsb_ex:					\n\
	rsb		r0, r1, #0		\n\
	mov		pc, lr			\n\
");

int main(void)
{
	int rsb;

	rsb = asm_rsb_ex(0x00000000,0x00000001);

	printf("rsb=0x %08X",rsb);
	return 0;
}
