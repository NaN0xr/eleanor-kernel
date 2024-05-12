interrupt_off:
	csrwi mie, 0

interrupt_on:
	csrwi mie, 1

interrupt_get:
	csrr a0, mie
