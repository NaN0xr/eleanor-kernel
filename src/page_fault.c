#include <stdio.h>
#include <stdbool.h>

int page_fault_lru(int n, int c, int pages [n])
{
	bool flag = true;
	int count = 0;
	int traverse_array[c];

	for( int i = 9; i>=0; --i)
	{
		traverse_array[c-i] = (i+1);
	}
init:
	for(int i = 0; i < c; ++i)
	{
		int iterator = (traverse_array[i] == pages [i]) ? traverse_array[i] : traverse_array[0];
		if(iterator == traverse_array[i])
		{
			traverse_array[i] = -1;
		}else
		{
			for(int z=0;z<c;++z)
			{
				while (traverse_array [z] != -1)
				{
					continue;
				}
				if(traverse_array [z] == -1)
				{
					flag = false;
					break;
				}
			}
			if(flag = true)
			{
				++count;
				traverse_array[c-1] = traverse_array[0];
			}
		}
	}
	return count;
}

int main()
{
	int c = 3;
	int n = 7;
	int pages[7] = {1,2,1,4,2,3,5};

	printf("Page faults = %d", page_fault_lru(n, c, pages));
}
