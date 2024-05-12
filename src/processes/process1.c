#include <stdio.h>
#include "../process_table.h"
#include <pthread.h>

// access(file.consumer.shared);
// For system call, access, there will be a mutex lock
// First time the system call is accessed after startup,
// wherein the lock will be unlocked, the process will lock the lock
// and unlock it after termination.

void producer
{
	struct process process_table;
	process_table.quantum = 12;	
}
