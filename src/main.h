#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

uint16_t return_mhartid()
{
        uint16_t mhartid;
        asm volatile("csrr %0, mhartid" : "=r"(mhartid));
        return mhartid+1;
}

char* return_stack_zero()
{
	char* stack_zero = malloc(return_mhartid() * 4096);
	return stack_zero;
}

