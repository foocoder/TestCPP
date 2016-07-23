// ---- Program Info Start----
//FileName:     foo1.c
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-07-23 15:54:11
// ---- Program Info End  ----

#include <stdio.h>

int strong = 0x1234;
int strong1 = 0x4321;

int main(int argc, char *argv[])
{
    printf("strong=0x%x strong1=0x%x \n", strong, strong1);
    bar();
    printf("strong=0x%x strong1=0x%x \n", strong, strong1);
    return 0;
}
