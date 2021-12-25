//
// Created by JH L on 2021/12/11.
//

#include <stdint.h>
#include <stdio.h>
#include <arpa/inet.h>
#include "../csapp.h"

#ifndef LJH
#define LJH
typedef char *string;
#endif

char *hex2dd(int hex);

int dd2hex(char *dd);

int main(void) {
    string str = "128.2.194.242";
    int hex = dd2hex(str);
    printf((const char *) hex);
}

char *hex2dd(int hex) {

}

int dd2hex(char *dd) {
    void *dst = NULL;

    int res = inet_pton(AF_INET, dd, dst);
    if (res != -1) {
        int *dd_p;
        dd_p = dst;
        return NULL == (void *) *dd_p ? -1 : *dd_p;
    }

    return -1;
}





