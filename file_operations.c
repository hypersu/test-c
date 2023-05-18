//
// Created by suxiaohan on 2023/5/16.
//

#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "file_operations.h"

void open_file() {
    int fd;
    fd = open("C:\\Users\\suxiaohan\\Desktop\\1.txt", O_RDWR, S_IRUSR | S_IWUSR | S_IXUSR);

    printf("文件描述符：%d", fd);

    // 分配内存
    char *p = malloc(BUFF_SIZE);

    read(fd, p, sizeof(p));

    printf("文件中的内容：%s", p);

    free(p);
}