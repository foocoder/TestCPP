// ---- Program Info Start----
//FileName:     testMaxHeapSizeandStackSize.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-05-29 20:49:02
// ---- Program Info End  ----

#include <stdio.h>
#include <stdlib.h>
#include <alloca.h>

int main(int argc, char *argv[])
{
    int KB = 0;
    while(alloca(1<<20)) ++KB;
    printf("Allocated %d MB total\n", KB);
    return 0;
}
