// ---- Program Info Start----
//FileName:     testFILEInputOutput.c
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-07-29 20:04:17
// ---- Program Info End  ----

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    FILE * ftest;
    char * a = (char *)malloc(20);
    ftest = fopen("./data", "w+");
    fwrite("testtesttest", 1, 13, ftest);
    /*if(fflush(ftest)!=0)*/
        /*printf(" fflush error! \n");*/
    fseek(ftest, 0, SEEK_SET);
    fread(a, 1, 13, ftest);

    printf("%s",a);
    free(a);
    return 0;
}
