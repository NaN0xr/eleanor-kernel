li t5, 1024

memory_map:
	la t0, var
	li t1, 4096
	divu t2, t0, t1
	remu t3, t0, t1
