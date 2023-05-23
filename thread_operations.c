//
// Created by suxiaohan on 2023/5/22.
//
#include <pthread.h>
#include <stdio.h>
#include "thread_operations.h"

void test() {
    printf("111111111\n");
}

void create_thread() {
    pthread_t t1;
    // 创建线程
    int thread_id = pthread_create(&t1, NULL, (void *(*)(void *)) test, NULL);
    printf("线程ID：%d\n", thread_id);

    pthread_join(t1, NULL);

    printf("线程结束\n");
}