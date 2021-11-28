//
// Created by JH L on 2021/11/10.
//
#include<stdio.h>
#include<string.h>

struct people {
    char a[100];
    int len;
};

int main() {
    int n;
    scanf("%d", &n);
    struct people x[n];
    for (int i = 0; i < n; i++) {
        scanf("%s", &x[i].a);
        x[i].len = strlen(x[i].a);
    }
    for (int i = 0; i < n; i++) {
        printf("%d\t%s\n", x[i].len, x[i].a);
    }
    return 0;
}

