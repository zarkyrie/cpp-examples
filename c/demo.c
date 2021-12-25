//
// Created by JH L on 2021/11/10.
//
#include<stdio.h>

int main(void) {
    register long num __asm("rax") = 0x100000000;
//    __asm("movl $0x1,%eax");
    __asm("movw $0x1,%ax");
    printf("%lx\n", num);

    return 0;
}

