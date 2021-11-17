#include<stdio.h>
char c; 
int main(){  
	asm(  "movl $1,%%edx \n\t"  
	"movl %0,%%ecx \n\t"  
	"movl $0,%%ebx \n\t"  
	"movl $3,%%eax \n\t"  
	"int $0x80 \n\t"  
	:
	:"r"(c):"edx","ecx","ebx");  

	asm(  "movl $1,%%edx \n\t"  
	"movl %0,%%ecx \n\t"  
	"movl $0,%%ebx \n\t"  
	"movl $4,%%eax \n\t"  
	"int $0x80 \n\t"  
	:
	:"r"(c):"edx","ecx","ebx");  

	asm(  "movl $0,%ebx \n\t"  
	"movl $1,%eax\n\t"  
	"int $0x80 \n\t");  
	return 0;  
}

