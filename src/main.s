.section .text
.global return_mhartid

_entry:
	la gp, __global_pointer$
	call return_stack_zero
	li a1, 4096
	call return_mhartid
	mv a0, a2
	mul a2, a2, a1
	call start
	
return_stack_zero:
	call return_mhartid
	mv a0, t0
	li t1, 4096
	mul sp, t1, t0	
	ret

return_mhartid:
	csrr a3, mhartid
	ret
