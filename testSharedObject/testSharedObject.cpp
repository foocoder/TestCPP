// ---- Program Info Start----
//FileName:     testSharedObject.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-05-28 11:15:48
// ---- Program Info End  ----

#include <stdio.h>
int myLibFunc(int, int);
int main(int argc, char *argv[])
{
    printf("Hello World!\n");
    printf("%d \n", myLibFunc(1,2));
    return 0;
}
