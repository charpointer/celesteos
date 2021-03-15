#ifndef ISR_H
#define ISR_H

#include <common.h>

extern const char* exceptions[32];

typedef struct {
	uint64_t r15, r14, r13, r12, r11, r10, r9, r8, rsi, rdi,
			 rbp, rdx, rcx, rbx, rax;
	
	uint64_t int_no, err_code;
	uint64_t rip, cs, rflags, rsp, ss;
} registers_t;

void isr_install();
void isr_handler(registers_t* regs);
#endif