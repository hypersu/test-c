//
// Created by suxiaohan on 2023/5/23.
//
#include <sys/ioctl.h>
#include <netinet/in.h>
#include <poll.h>
#include "socket_operations.h"

void test_epoll_create() {
    // cygwin不支持
    // 更换为Linux

}