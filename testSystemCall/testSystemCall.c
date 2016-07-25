// ---- Program Info Start----
//FileName:     testSystemCall.c
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-07-25 13:26:57
// ---- Program Info End  ----

#include </usr/include/sys/syscall.h>

int main(int argc, char *argv[])
{
    write(1, "Hello, World\n", 150);
    return 0;
}
