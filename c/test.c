//
// Created by JH L on 2020/10/5.
//
#include <stdio.h>
#include <libc.h>

struct AA {
    int a;
};

int main() {
    struct AA a = {1};
    struct AA b = a;
    printf("%p\n", &a);
    printf("%p\n", &b);
}

