char data[1]; 
int main(){  
      asm(  "movl $3,%%eax \n\t" 
            "movl $1,%%ebx \n\t"  
            "movl %0,%%ecx \n\t" 
            "movl $1,%%edx \n\t"
            "int $0x80 \n\t"  
            :
            :"g"(data)
            :"eax","edx","ecx","ebx");
      asm(  "movl $4,%%eax \n\t"  
            "movl $1,%%ebx \n\t"  
            "movl %0,%%ecx \n\t" 
            "movl $1,%%edx \n\t"  
            "int $0x80 \n\t"  
            :
            :"g"(data)
            :"eax","edx","ecx","ebx");  
      asm(  "movl $0,%ebx \n\t"  
            "movl $1,%eax\n\t"  
            "int $0x80");  
}

