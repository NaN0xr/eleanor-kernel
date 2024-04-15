#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdatomic.h>

extern return_mhartid();

struct spinlock
{
	int locked;
	struct cpu *cpu;

};

void initlock(struct spinlock *spinlock_struct)
{
	spinlock_struct->locked = 0;
	spinlock_struct->cpu = 0;
}

void acquire (struct spinlock *spinlock_struct)
{
	asm("call interrupt_off");
	_Atomic int state_compute;
	int state = 1;
	state_compute = atomic_exchange(&(spinlock_struct->locked), state);
	while(state_compute != 0)
	{
		state_compute = atomic_exchange(&(spinlock_struct->locked), state);
	}

}

void release (struct spinlock *spinlock_struct)
{
	spinlock_struct->locked = 0;
}

uint16_t holding(struct spinlock* spinlock_struct)
{
	int return_value;
	return_value = (spinlock_struct->locked == 0 && spinlock_struct->cpu == return_mhartid());
	return return_value;
}


