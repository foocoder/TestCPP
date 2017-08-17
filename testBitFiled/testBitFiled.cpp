// ---- Program Info Start----
//FileName:     testBitFiled.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2017-03-16 15:52:54
// ---- Program Info End  ----

#include <stdio.h>

struct Test{
    unsigned short int a: 5;
    unsigned short int b: 5;
    unsigned short int c: 5;
};

int main(int argc, char *argv[])
{
    Test test;
    test.a = 16;
    test.b = 4;
    test.c = 0;
    int i = *(short *) &test;
    printf( "%d\n",i );
    return 0;
}
