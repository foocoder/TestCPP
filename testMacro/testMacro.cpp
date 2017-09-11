/*
 *@@@@@@@@@@ File Information Start  @@@@@@@@@@
 * @file:        testMacro.cpp
 * @author:      Fuchen Duan
 * @email:       slow295185031@gmail.com
 * @github:      https://foocoder.github.com
 * @homepage:    http://foocder.github.io
 * @create at:   2017-09-11 22:48:29
 * @last update: 2017-09-11 23:16:11
 *@@@@@@@@@@ File Information Finish @@@@@@@@@@
*/

#include <cstdio>

#define my_printf(format, ...) printf( "[TMon]:" format "\n", __VA_ARGS__)

int main(int argc, char *argv[])
{
    my_printf("Hello world %s, %d", "lalala", 23);
    return 0;
}
