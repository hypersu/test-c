//
// Created by suxiaohan on 2023/5/22.
//
#include <stdio.h>
#include "syntax_operations.h"

int func() {
    printf("111111111111");
    return 0;
}

void convert_func_pointer() {
    // warning: function called through a non-compatible type
    // (*(void (*)(void)) func)();
    (*(int (*)(void)) func)();
}