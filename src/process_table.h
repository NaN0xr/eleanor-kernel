#pragma once

typedef enum 
{
	READY,
	RUNNING,
	BLOCKED
}PROCESS_STATE;

typedef struct
{
	char* registers[2];
	uint64_t stack_pointer;
	uint64_t program_counter;
	void (*pointer_to_text_segment)();
	uint64_t quantum;
	PROCESS_STATE process_state;
	uint16_t process_id;
}process;

process process_table;
process* processTable_pointer = &process_table;
