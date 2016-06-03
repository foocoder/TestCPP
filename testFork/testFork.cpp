// ---- Program Info Start----
//FileName:     testFork.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-06-03 09:43:22
// ---- Program Info End  ----

#include <cstdio>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    int i;
    for(i=0; i<2; ++i){
        fork();
        printf("1\n");
    }
    return 0;
}
