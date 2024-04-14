.global interrupt_off
.global interrupt_on
.global interrupt_get

interrupt_off:
	csrwi mie, 0

interrupt_on:
	csrwi mie, 1

interrupt_get:
	csrr a0, mie
