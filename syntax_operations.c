//
// Created by suxiaohan on 2023/5/22.
//
#include <stdio.h>
#include <unistd.h>
#include "syntax_operations.h"

int func() {
    printf("111111111111\n");
    return 0;
}

void convert_func_pointer() {
    // warning: function called through a non-compatible type
    // (*(void (*)(void)) func)();
    (*(int (*)(void)) func)();
}

void get_current_pid() {
    pid_t current_pid = getpid();
    printf("当前进程PID：%d", current_pid);
}