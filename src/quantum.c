#include <time.h>
#include "process_table.h"

void quantum(struct process process_array[8])
{
	clock_t start, end;
	int time_elasped;
	for(int i=0;i<8;++i)
	{
		while(process_array[i].process_state == RUNNING)
		{
			clock_t start = clock();
			while(process_array[i].quantum < time_elasped)
			{
				clock_t end = clock();
				uint32_t time_elasped = (end - start) / CLOCKS_PER_SEC * 1000;
			}
			process_array[i].process_state == BLOCKED;	
		}
		
	}
}
