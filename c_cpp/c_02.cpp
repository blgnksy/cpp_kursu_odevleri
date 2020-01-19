//
// Created by Bilgin Aksoy on 19.01.2020.
//

#include <stdio.h>

int nec = 0;

int main()
{
    struct nec {
        char str[64];
    };
    printf("sizeof(nec) = %zu\n", sizeof(nec));
}