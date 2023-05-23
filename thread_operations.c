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
    pthread_t t2;
    // 创建线程
    int ret1 = pthread_create(&t1, NULL, (void *(*)(void *)) test, NULL);
    int ret2 = pthread_create(&t2, NULL, (void *(*)(void *)) test, NULL);
    printf("创建1线程结果：%d\n", ret1);
    printf("创建2线程结果：%d\n", ret2);

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);

    printf("线程结束\n");
}