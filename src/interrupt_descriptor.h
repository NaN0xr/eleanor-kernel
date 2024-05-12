#pragma once
#define ASM_CTR(i) "x" #i

void interrupt_descriptor(int process_ID)
{
	int process_i = 1;
	process processTable;
	register uint64_t processTable_stackPointer asm ("sp");
	// register uint64_t processTable_programCounter asm ("pc");
		
	for(int i=0; i<=1;++i)
	{
		register uint64_t processTable_register1 asm ("x1");
		register uint64_t processTable_register2 asm ("x2");
	}

	processTable.stack_pointer = processTable_stackPointer;
	// processTable.program_counter = processTable_programCounter;
	processTable.process_id = process_ID;
	
}
