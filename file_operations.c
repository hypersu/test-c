//
// Created by suxiaohan on 2023/5/16.
//

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include "file_operations.h"

void open_file_creat() {
    // 分配内存
    char *p = malloc(BUFF_SIZE);

    int fd;
    // 打开文件描述符
    fd = open("C:\\Users\\suxiaohan\\Desktop\\1.txt", O_RDWR | O_CREAT, S_IRUSR | S_IWUSR | S_IXUSR);

    printf("文件描述符：%d\n", fd);

    char str[] = "123456";

    strcpy(p, str);

    printf("字符串长度：%zu\n", sizeof(str));
    printf("内存长度：%zu\n", strlen(p));

    write(fd, p, 1024);

    memset(p, 0, 1024);

    // 读取文件
    read(fd, p, 1024);

    printf("文件中的内容：%s\n", p);

    // 释放内存
    free(p);

    // 关闭文件描述符
    close(fd);

}

void open_file_trunc() {
    // 分配内存
    char *p = malloc(BUFF_SIZE);

    memset(p, 0, BUFF_SIZE);

    int fd;
    // 打开文件描述符
    fd = open("C:\\Users\\suxiaohan\\Desktop\\2.txt", O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IXUSR);

    printf("文件描述符：%d\n", fd);

    char str[] = "123456";

    strcpy(p, str);

    printf("字符串长度：%zu\n", sizeof(str));
    printf("内存长度：%zu\n", strlen(p));

    write(fd, p, BUFF_SIZE);

    memset(p, 0, BUFF_SIZE);

    // 读取文件
    read(fd, p, BUFF_SIZE);

    printf("文件中的内容：%s\n", p);

    // 释放内存
    free(p);

    // 关闭文件描述符
    close(fd);

}

void open_file_excel() {
    // 分配内存
    char *p = (char *) malloc(BUFF_SIZE);

    // 置空
    memset(p, 0, BUFF_SIZE);

    // 打开文件
    int fd = open("C:\\Users\\suxiaohan\\Desktop\\test_excel.txt", O_RDWR | O_CREAT | O_EXCL, S_IRWXU);

    printf("错误码：%d", errno);

    strcpy(p, "123456");

    // 写入文件
    write(fd, p, strlen(p));

    memset(p, 0, strlen(p));

    // 读取文件
    read(fd, p, BUFF_SIZE);

    printf("文件内容：%s", p);
}