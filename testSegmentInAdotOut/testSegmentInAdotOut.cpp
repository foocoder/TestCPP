// ---- Program Info Start----
//FileName:     testSegmentInAdotOut.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-05-28 19:41:30
// ---- Program Info End  ----

#include <stdio.h>
#include <alloca.h>

int gnArr[1000] = {1,1,1,1};
int main(int argc, char *argv[])
{
    int lnArr[1000] = {1,1};
    int * pnArr = (int *) alloca(sizeof(char) * 1024 * 1024 * 4);
    printf("Hello World\n");
    return 0;
}
