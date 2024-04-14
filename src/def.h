#pragma once

uint16_t return_mhartid(void)
{
	uint16_t mhartid;
	asm volatile("csrr r0, mhartid" : "=r"(mhartid));
	return mhartid;
}
