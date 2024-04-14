.section .text
.global _entry

MEMORY_START = 0x80000000

_entry:
	call return_stack_zero
	mv a0, sp
	li t0, MEMORY_START
	add sp, t0, sp
	li a1, 4096
	call return_mhartid
	mv a0, a2
	mul a2, a2, a1
	call start
	

	
